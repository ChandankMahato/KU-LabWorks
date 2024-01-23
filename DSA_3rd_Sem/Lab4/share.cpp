#include <iostream>
 
using namespace std;
 
class Graph {
private:
    int numVertices, numEdge=0, numInDegree=0, numOutDegree=0, degree=0;
    int check = false;
    int adjMatrix[10][10];
 
public:
    Graph(int x)
    {
        numVertices = x;
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numVertices; ++j) {
                adjMatrix[i][j] = 0;
            }
        }
    }
 
    void displayAdjacencyMatrix()
    {
        cout << "\nAdjacency Matrix:";
        for (int i = 0; i < numVertices; ++i) {
            cout << "\n";
            for (int j = 0; j < numVertices; ++j) {
                if(adjMatrix[i][j] !=-1){
                    cout << "  "<< adjMatrix[i][j];
                }else{
                    cout << " " << adjMatrix[i][j];
                }    
            }
        }
    }
 
    void addEdge(int x, int y)
    {
        if ((x >= numVertices) || (y > numVertices)) {
            cout << "Vertex does not exists!";
        }
        if (x == y) {
            cout << "Same Vertex!";
        }
        else {
            adjMatrix[y][x] = 0;
            adjMatrix[x][y] = 1;
            numEdge++;
        }
    }

    void removeEdge(int x, int y){
        if((x>=numVertices)  || (y>numVertices)){
            cout << "Vertex does not exists!";
        }
        if (x == y) {
            cout << "Same Vertex!";
        }
        else{
            adjMatrix[y][x] = 0;
            adjMatrix[x][y] = 0;
            numEdge--;
        }
    }
 
    void addVertex()
    {
        numVertices++;
        int i;
        for (i = 0; i < numVertices; ++i) {
            adjMatrix[i][numVertices - 1] = 0;
            adjMatrix[numVertices - 1][i] = 0;
        }
    }
 
    void removeVertex(int x)
    {
        if (x > numVertices) {
            cout << "\nVertex not present!";
            return;
        }
        if(x <= numVertices){
            for(int i = 0; i< numVertices; ++i){
                if(adjMatrix[i][x-1] == 1){
                    check = true;
                    cout << "\nFirst Remvoe Edge Between vertex " << i << " and " << x;
                }
            }
        }
        if(check == false && x <= numVertices){
            int i;
            while (x < numVertices) {
                for (i = 0; i < numVertices; ++i){
                    adjMatrix[i][x] = adjMatrix[i][x + 1];
                }
                for (i = 0; i < numVertices; ++i) {
                    adjMatrix[x][i] = adjMatrix[x + 1][i];
                }
                x++;
            }
            numVertices--;
        }
    }

    void numOfVertices(){
        cout << "Number of Vertices = "<< numVertices;
    }
    
    void numOfEdge(){
        if(numEdge == 0){
            cout << "Graph is Empty"<<endl;
        }else{
            cout << "Number of Edge = " << numEdge;
        }
    }

    void isEmpty(){
        if(numEdge == 0){
            cout << "Graph is Empty"<<endl;
        }else{
            cout << "Graph is Not Empty"<<endl;
        }
    }

    void isDirected(){
        cout << "Yes, Graph is Directed"<<endl;
    }

    void DegreeCount(int v){
        if(v > numVertices){
            cout << "Vertext Does not exist"<<endl;
        }else{
            for(int i=0; i<numVertices; ++i){
                if(adjMatrix[i][v-1] == 1){
                    numInDegree++;
                }
                if(adjMatrix[v-1][i] == 1){
                    numOutDegree++;
                }
            }
            degree = numInDegree + numOutDegree;
            cout << "Number of Indegree = "<< numInDegree << endl;;
            cout << "Number of OutDegree = "<< numOutDegree << endl;;
            cout << "Total Degree of Vertex = "<< degree << endl;
            numOutDegree=numInDegree=degree=0;
        }
    }

    void neighbourOfVertex(int v){
        if(v > numVertices){
            cout << "Vertext Does not exist"<<endl;
        }else{
            for(int i=0; i< numVertices; i++){
                if(adjMatrix[v-1][i] == 1){
                    cout << v << " is neighbour to " << i+1;
                    cout << endl;
                }
                if(adjMatrix[i][v-1] == 1){
                    cout << v << " is neighbour to "<< i+1;
                    cout << endl;
                }
            }
        }
    }

    void V1NeighbourToV2(int v1, int v2){
        if(v1 > numVertices || v2 > numVertices){
            cout << "Vertext Does not exist"<<endl;
        }else{
            if(adjMatrix[v1-1][v2-1]==1){
                cout << v1 <<" is neighbour to "<<v2<<endl;
            }else{
                cout << v1<<" is not neighobut to "<< v2<<endl;
            }
        }
    }

    void generateGraph(){
         if(numVertices == 0){
            cout << "Graph Could not be generated"<<endl;
        }else{
            for(int j=0; j<numVertices; j++){
                cout << j+1 << "-> { ";
                for(int i=0; i< numVertices; i++){
                    if(adjMatrix[j][i] == 1){
                        cout << i+1 << " ";
                    }
                }
                cout << "}"<<endl;
            }
        }
    }
};
 
int main()
{
    Graph obj(4);

  obj.isEmpty();

  obj.addEdge(0, 2);
  obj.addEdge(1, 2);
  obj.addEdge(2, 3);
  obj.addEdge(1,3);

  obj.displayAdjacencyMatrix();

//   cout << endl;
//   obj.DegreeCount(3);
//   cout << endl;

//   obj.removeVertex(5);
//   obj.displayAdjacencyMatrix();
//   obj.displayAdjacencyMatrix();

//   obj.removeEdge(2,2);
//   obj.displayAdjacencyMatrix();
//   obj.removeEdge(4, 2);
//   obj.displayAdjacencyMatrix();
  
//   cout << endl;
//   obj.numOfVertices();
//   cout << endl;
//   obj.numOfEdge();
//   cout << endl;
//   obj.isEmpty();
//   cout << endl;
//   obj.isDirected();

    cout << endl;
    obj.neighbourOfVertex(1);
    obj.neighbourOfVertex(2);
    obj.neighbourOfVertex(3);
    obj.neighbourOfVertex(4);

    obj.V1NeighbourToV2(1, 2);
    obj.V1NeighbourToV2(1,3);
    obj.V1NeighbourToV2(2,3);
    obj.V1NeighbourToV2(3,1);

    cout << "Graph Generation:"<<endl;
    obj.numOfVertices();
    cout<< endl;
    obj.numOfEdge();
    cout << endl;
    cout << "The generated graph is:"<<endl;
    obj.generateGraph();

 
    return 0;
}