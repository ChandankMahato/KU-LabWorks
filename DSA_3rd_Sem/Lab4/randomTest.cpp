#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const char lettring[] = 
{
  'A', 'B', 'C', 'D', 'E', 
  'F', 'G', 'H', 'I', 'J', 
  'K', 'L', 'M', 'N', 'O', 
  'P', 'Q', 'R', 'S', 'T', 
  'U', 'V', 'W', 'X', 'Y', 
  'Z'
};

class Graph{
    private:
        int randAdjMatrix[26][26];
    public:
        int numVertices;
        void setRandAdjMatrix(int numVertices){
            for(int i=1; i<=numVertices; ++i){
                for(int j=1; j<=numVertices; ++j){
                    randAdjMatrix[i][j] = 0;
                    randAdjMatrix[j][i] = 0;
                }   
            }
        }

        void addRandEdge(int e){
            for(int i=e; i > 0; i--){
                int v1, v2;
                v1 = rand()%numVertices + 1;
                v2 = rand()%numVertices + 1;

                if(v1==v2){
                    randAdjMatrix[v1][v2] = 0;
                }else{
                    randAdjMatrix[v1][v2] = 1;
                    randAdjMatrix[v2][v1] = 1;
                }
            }
        }

        
    void displayAdjacencyMatrix(){
        cout << "\nAdjacency Matrix:\n";
        cout << "   ";
        for(int i=0; i<= numVertices; i++){
            cout << "\033[1;36m" << lettring[i-1] << "\033[0m"<< " ";
        }
        cout << endl;
        cout << "    ";
        for(int i=1; i<= numVertices; i++){
        cout <<"\033[1;33m_\033[0m"<< " ";
        }
        cout << endl;
        for (int i = 1; i <= numVertices; ++i) {
            cout << "\033[1;36m" <<lettring[i-1] << "\033[0m"<<" "<<"\033[1;33m|\033[0m"<<" ";
            for (int j = 1; j <= numVertices; ++j) {
                if(randAdjMatrix[i][j] == 0){
                    cout << "\033[1;31m"<<randAdjMatrix[i][j] <<"\033[0m"<< " ";
                }
                if(randAdjMatrix[i][j] == 1){
                    cout << "\033[1;32m" <<randAdjMatrix[i][j] <<"\033[0m"<< " ";
                }    
            }
            cout << "\n";
        }
    }

    void generateGraph(){
            if(numVertices == 0){
            cout << "Graph Could not be generated"<<endl;
        }else{
            for(int j=1; j<=numVertices; j++){
                cout << "\033[1;31m"<<lettring[j-1] <<"\033[0m"<< "\033[1;33m->\033[0m " <<"\033[1;36m{\033[0m ";
                for(int i=1; i<= numVertices; i++){
                    if(randAdjMatrix[j][i] == 1){
                        cout<<"\033[1;32m" << lettring[i-1] <<"\033[0m" << " ";
                    }
                }
                cout <<"\033[1;36m}\033[0m" <<endl;
            }
        }
    }
};

int main()
{
    Graph G;
    int i, e, n;
    cout << "Random Graph Generation: \n";
    srand(time(0));
    //generating random number between 1 to 26
    n = rand()%26 + 1;
    cout << n;
    cout << endl;
    //generating random number between 1 to 50
    e = rand()%50 + 1;
    cout << e;
    G.numVertices = n;
    G.setRandAdjMatrix(n);
    G.addRandEdge(e);
    G.displayAdjacencyMatrix();
    G.generateGraph();
}