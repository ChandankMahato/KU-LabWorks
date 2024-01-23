// Adjacency Matrix representation in C++

#include <iostream>
#include <stdlib.h>
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

class Graph {
   private:
  bool** adjMatrix;
  int numVertices;

   public:
  // Initialize the matrix to zero
  Graph(int numVertices) {
    this->numVertices = numVertices;
    adjMatrix = new bool*[numVertices];
    for (int i = 0; i < numVertices; i++) {
      adjMatrix[i] = new bool[numVertices];
      for (int j = 0; j < numVertices; j++)
        adjMatrix[i][j] = false;
    }
  }

  // Add edges
  void addEdge(int i, int j) {
    adjMatrix[i][j] = true;
    adjMatrix[j][i] = true;
  }

  // Remove edges
  void removeEdge(int i, int j) {
    adjMatrix[i][j] = false;
    adjMatrix[j][i] = false;
  }

  // Print the martix
  void toString() {
    cout << "    ";
    for(int i = 0; i< numVertices; i++){
      cout << "\033[1;36m" << lettring[i] << "\033[0m"<< " ";
    }
    cout << endl;
    cout << "    ";
    for(int i=0; i< numVertices; i++){
      cout <<"\033[1;33m_\033[0m"<< " ";
    }
    cout << endl;
    for (int i = 0; i < numVertices; i++) {
      cout << "\033[1;36m" <<lettring[i] << "\033[0m"<<" "<<"\033[1;33m|\033[0m"<<" ";
      for (int j = 0; j < numVertices; j++){
        if(adjMatrix[i][j] == 0){
          cout << "\033[1;31m"<<adjMatrix[i][j] <<"\033[0m"<< " ";
        }
        if(adjMatrix[i][j] == 1){
          cout << "\033[1;32m" <<adjMatrix[i][j] <<"\033[0m"<< " ";
        }
      }
      cout << "\n";
    }
  }

  ~Graph() {
    for (int i = 0; i < numVertices; i++)
      delete[] adjMatrix[i];
    delete[] adjMatrix;
  }
};

int main() {
  Graph g(6);

  g.addEdge(2, 2);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(4, 2);

  g.toString();
}

