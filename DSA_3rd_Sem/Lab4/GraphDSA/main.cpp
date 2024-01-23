#include "graph_implementation.h"
#include "graph.h"
#include <iostream>
#include <time.h>

int main()
{
    Graph G(4);
    int v1, v2, choice;

    cout << "\nSelect Choice to perform Operation on Graph!\n";
    G.operationList();

    do{
      cout << "\nEnter Choice: ";
      cin >> choice;

      switch (choice)
      {
      case 0:
        G.operationList();
        break;
      case 1:
        if(G.isEmpty()){
          cout << "Graph Is Empty!\n";
        }else{
          cout << "Graph Is Not Empty!\n";
        }
        break;
      case 2:
        if(G.isDirected()){
          cout << "Graph Is Directed!\n";
        }
        break;
      case 3:
        cout << "Adding Vertex...\n";
        G.addVertex();
        cout << "Vertex Added!\n";
        break;
      case 4:
        cout << "Enter Vertex1: ";
        cin >> v1;
        cout << "Enter Vertex2: ";
        cin >> v2;
        cout << "Adding Edge Between " << "\033[1;31m"<<lettring[v1-1]<<"\033[0m" << " and " << "\033[1;31m"<<lettring[v2-1]<<"\033[0m" <<"...\n";
        G.addEdge(v1, v2);
        if(v1 <= G.numVertices && v2 <= G.numVertices){
          cout << "Edge Added Between "<< "\033[1;32m"<<lettring[v1-1]<<"\033[0m" << " and " << "\033[1;32m"<<lettring[v2-1]<<"\033[0m" << "!\n";
        }
        break;
      case 5:
        cout << "Enter Vertex1: ";
        cin >> v1;
        cout << "Enter Vertex2: ";
        cin >> v2;
        if(G.V1NeighbourToV2(v1, v2)){
          if(v1 <= G.numVertices && v2 <= G.numVertices){
            cout << "Before Removal: \n";
            G.displayAdjacencyMatrix();
            cout << "Removing Edge Between " <<  "\033[1;31m"<<lettring[v1-1]<<"\033[0m" << " and " << "\033[1;31m"<<lettring[v2-1]<<"\033[0m" <<"...\n";
            G.removeEdge(v1, v2);
            cout << "Edge Removed Between "<< "\033[1;32m"<<lettring[v1-1]<<"\033[0m" << " and " << "\033[1;32m"<<lettring[v2-1]<<"\033[0m" << "!\n";
            cout << "After Removal: \n";
            G.displayAdjacencyMatrix();
          }
        }else{
          cout << "Edge Does Not Exist!\n";
        }
      break;
      case 6:
        cout << "Enter Vertex To Be Removed: ";
        cin >> v1;
        if(v1 <= G.numVertices){
          cout << "Removing Vertex " << "\033[1;31m"<<lettring[v1-1]<<"\033[0m" << "...\n";
          G.removeVertex(v1);
          if(G.check == false){
            cout << "Before Removal: \n";
            G.displayAdjacencyMatrix();
            cout << "Vertex " << "\033[1;32m"<<lettring[v1-1]<<"\033[0m" << " Removed!\n";
            cout << "Name of the Vertex are changed According to the removal of vertex\n";
            cout << "After Removal: \n";
            G.displayAdjacencyMatrix();
          }
          G.check = false;
        }
        break;
      case 7:
          cout << "Num of Vertices = " << G.numOfVertices();
          cout << endl;
        break;
      case 8:
        if(!G.isEmpty()){
          cout << "Num of Edge = " << G.numOfEdge();
        }else{
          cout << "Graph is Empty!\n";
        }
        break;
      case 9:
        cout << "Enter Vertex: ";
        cin >> v1;
        if(v1 <= G.numVertices){
          cout << "Degree of Vertex " << "\033[1;32m"<<lettring[v1-1]<<"\033[0m" << " is " << G.Degree(v1);
          G.setDegreeZero();
        }
        cout << endl;
        break;
      case 10: 
        cout << "Enter Vertex: ";
        cin >> v1;
        if(v1 <= G.numVertices){
           cout << "Indegree of Vertex " << "\033[1;32m"<<lettring[v1-1]<<"\033[0m" << " is " << G.inDegree(v1);
          G.setDegreeZero();
        }
        cout << endl;
        break;
      case 11:
        cout << "Enter Vertex: ";
        cin >> v1;
        if(v1 <= G.numVertices){
          cout << "Outdegree of Vertex " << "\033[1;32m"<<lettring[v1-1]<<"\033[0m" << " is " << G.outDegree(v1);
          G.setDegreeZero();
        }
        cout << endl;
        break;
      case 12:
        cout << "Enter Vertex: ";
        cin >> v1;
        if(v1 <= G.numVertices){
          G.neighbourOfVertex(v1);
        }
        cout << endl;
        break;
      case 13:
        cout << "Enter Vertex1: ";
        cin >> v1;
        cout << "Enter Vertex2: ";
        cin >> v2;
        if(v1 <= G.numVertices && v2 <= G.numVertices){
          cout << "Checking Relation Between " << "\033[1;31m"<<lettring[v1-1]<<"\033[0m" << " and " << "\033[1;31m"<<lettring[v2-1]<<"\033[0m" << "...\n";
          if(G.V1NeighbourToV2(v1, v2)){
            cout << "\033[1;32m"<<lettring[v1-1]<<"\033[0m" << " is Neighbour to " << "\033[1;32m"<<lettring[v2-1]<<"\033[0m" <<endl;
          }else{
            cout << "\033[1;31m"<<lettring[v1-1]<<"\033[0m" << " is Not Neighbour to " << "\033[1;31m"<<lettring[v2-1]<<"\033[0m" << endl;
          }
        }
        break;
      case 14:
        if(!G.isEmpty()){
          cout << "Displaying Adjacency Matrix...\n";
          G.displayAdjacencyMatrix();
        }else{
          cout << "Graph is Empty!\n";
        }
        break;
      case 15:
        if(!G.isEmpty()){
          cout << "Generating Graph Corresponding To Adjacency Matrix...\n";
          cout << "Number of Vertices = " << G.numOfVertices();
          cout << endl;
          cout << "Number of Edge = " << G.numOfEdge();
          cout << endl;
          cout << "Generated Graph is: \n";
          G.generateGraph();
        }else{
          cout << "Graph Is Empty!\n";
        }
        break;
      case 16:
        int e, n;
        cout << "Random Graph Generation: \n";
        srand(time(0));
        n=rand()%26 + 1;
        e=rand()%((n*(n-1)/2)) + 1;
        G.randNumVertices = n;
        G.setRandAdjMatrix(n);
        G.addRandEdge(e);
        cout << "This is An Undirected Random Generated Graph...\n";
        cout << "Number Of Vertex = "<< n << endl;
        cout << "Number Of Edge = " << e << endl;
        G.displayRandomAdjacencyMatrix();
        cout << "Graph Visualization!\n";
        G.generateRandomGraph();
        break;
      case 17:
        cout << "Programme Terminated!\n";
        break;
      default:
        cout << "Inputs are 0-17, Enter 0 to get Operation list\n";
        break;
      }

    }while(choice != 17);
    return 0;
}