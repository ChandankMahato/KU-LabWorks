#include "graph.h"
#include <iostream>

const char lettring[] =
    {
        'A', 'B', 'C', 'D', 'E',
        'F', 'G', 'H', 'I', 'J',
        'K', 'L', 'M', 'N', 'O',
        'P', 'Q', 'R', 'S', 'T',
        'U', 'V', 'W', 'X', 'Y',
        'Z'};

Graph::Graph(int v)
{
    numVertices = v;
    for (int i = 1; i <= numVertices; ++i)
    {
        for (int j = 1; j <= numVertices; ++j)
        {
            adjMatrix[i][j] = 0;
        }
    }
}

bool Graph::isEmpty()
{
    if (numEdge == 0)
        return true;
    else
        return false;
}

bool Graph::isDirected()
{
    if (numVertices == 0)
        cout << "Vertex Does Not Exist!";
    else
        return true;
}

void Graph::addVertex()
{
    numVertices++;
    int i;
    for (i = 1; i <= numVertices; ++i)
    {
        adjMatrix[i][numVertices] = 0;
        adjMatrix[numVertices][i] = 0;
    }
}

void Graph::addEdge(int v1, int v2)
{
    if ((v1 > numVertices) || (v2 > numVertices))
    {
        cout << "Vertex does not exist!";
    }
    if (v1 == v2)
    {
        cout << "Self Loop Not Allowed!";
    }
    if ((v1 <= numVertices) && (v2 <= numVertices) && v1 != v2)
    {
        adjMatrix[v2][v1] = 0;
        adjMatrix[v1][v2] = 1;
        numEdge++;
    }
}

void Graph::removeEdge(int v1, int v2)
{
    if ((v1 > numVertices) || (v2 > numVertices))
    {
        cout << "Vertex does not exist!";
    }
    if (v1 == v2)
    {
        cout << "Edge Does Not Exist!";
    }
    if ((v1 <= numVertices) && (v2 <= numVertices) && v1 != v2)
    {
        adjMatrix[v2][v1] = 0;
        adjMatrix[v1][v2] = 0;
        numEdge--;
    }
}

void Graph::removeVertex(int v)
{
    if (v > numVertices)
    {
        cout << "\nVertex Does Not Exist!";
        return;
    }
    if (v <= numVertices)
    {
        for (int i = 1; i <= numVertices; ++i)
        {
            if (adjMatrix[v][i] == 1 || adjMatrix[i][v] == 1)
            {
                check = true;
                cout << "\nFirst Remvoe Edge Between vertex "
                     << "\033[1;31m" << lettring[v - 1] << "\033[0m"
                     << " and "
                     << "\033[1;31m" << lettring[i - 1] << "\033[0m"
                     << ", Isolate Vertex "
                     << "\033[1;32m" << lettring[v - 1] << "\033[0m"
                     << " To Remove " << endl;
            }
        }
    }
    if (check == false && v <= numVertices)
    {
        int i;
        while (v <= numVertices)
        {
            for (i = 1; i <= numVertices; ++i)
            {
                adjMatrix[i][v] = adjMatrix[i][v + 1];
            }
            for (i = 1; i <= numVertices; ++i)
            {
                adjMatrix[v][i] = adjMatrix[v + 1][i];
            }
            v++;
        }
        numVertices--;
    }
}

int Graph::numOfVertices()
{
    if (numVertices == 0)
    {
        cout << "Vertex Does Not Exist!";
    }
    else
    {
        return (numVertices);
    }
}

int Graph::numOfEdge()
{
    if (numEdge == 0)
    {
        cout << "Graph is Empty" << endl;
    }
    else
    {
        return (numEdge);
    }
}

int Graph::Degree(int v)
{
    if (v > numVertices)
    {
        cout << "Vertext Does not exist" << endl;
    }
    else
    {
        for (int i = 1; i <= numVertices; ++i)
        {
            if (adjMatrix[i][v] == 1)
            {
                numInDegree++;
            }
            if (adjMatrix[v][i] == 1)
            {
                numOutDegree++;
            }
        }
        degree = numInDegree + numOutDegree;
        return (degree);
    }
}

int Graph::inDegree(int v)
{
    if (v > numVertices)
    {
        cout << "Vertext Does not exist" << endl;
    }
    else
    {
        for (int i = 1; i <= numVertices; ++i)
        {
            if (adjMatrix[i][v] == 1)
            {
                numInDegree++;
            }
        }
        return (numInDegree);
    }
}

int Graph::outDegree(int v)
{
    if (v > numVertices)
    {
        cout << "Vertext Does not exist" << endl;
    }
    else
    {
        for (int i = 1; i <= numVertices; ++i)
        {
            if (adjMatrix[v][i] == 1)
            {
                numOutDegree++;
            }
        }
        return (numOutDegree);
    }
}

void Graph::setDegreeZero()
{
    numOutDegree = numInDegree = degree = 0;
}

void Graph::neighbourOfVertex(int v){
    if(v > numVertices){
        cout << "Vertext Does not exist"<<endl;
    }else{
        cout << "Neighbour/s of Vertex "<<"\033[1;31m"<<lettring[v-1]<<"\033[0m" << " is/are " <<"\033[1;36m{\033[0m ";
        for(int i=1; i<= numVertices; i++){
            if(adjMatrix[v][i] == 1 || adjMatrix[i][v] == 1){
                cout<<"\033[1;32m" << lettring[i-1] <<"\033[0m" << " ";
            }
        }
        cout <<"\033[1;36m}\033[0m" <<endl;
    }
}

bool Graph::V1NeighbourToV2(int v1, int v2){
    if(v1 > numVertices || v2 > numVertices){
        cout << "Vertext Does not exist"<<endl;
    }else{
        if(adjMatrix[v1][v2]==1 || adjMatrix[v2][v1]==1){
            return true;
        }else{
            return false;
        }
    }
}

void Graph::displayAdjacencyMatrix()
{
    cout << "\nAdjacency Matrix:\n";
    cout << "   ";
    for(int i=1; i<= numVertices; i++){
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

void Graph::generateGraph(){
    int count = 0;
    if(numVertices == 0){
        cout << "Graph Could not be generated"<<endl;
    }else{
        for(int j=1; j<=numVertices; j++){
            cout << "\033[1;31m"<<lettring[j-1] <<"\033[0m"<< "\033[1;33m->\033[0m " <<"\033[1;36m{\033[0m ";
            for(int i=1; i<= numVertices; i++){
                if(adjMatrix[j][i] == 1){
                    cout<<"\033[1;32m" << lettring[i-1] <<"\033[0m" << " ";
                    count = 1;
                }
            }
            if(count == 0){
                    cout << "\033[1;32mIsolated Vertex\033[0m ";
                }
            count = 0;
            cout <<"\033[1;36m}\033[0m" <<endl;
        }
    }
}

//Bonus Task Starts here...
void Graph::setRandAdjMatrix(int randNumVertices){
        for(int i=1; i<=randNumVertices; ++i){
            for(int j=1; j<=randNumVertices; ++j){
                randAdjMatrix[i][j] = 0;
                randAdjMatrix[j][i] = 0;
            }   
        }
    }

void Graph::addRandEdge(int e){
    for(int i=e; i > 0; i--){
        int v1, v2;
        v1 = rand()%randNumVertices + 1;
        v2 = rand()%randNumVertices + 1;

        if(v1==v2){
            randAdjMatrix[v1][v2] = 0;
        }else{
            randAdjMatrix[v1][v2] = 1;
            randAdjMatrix[v2][v1] = 1;
        }
    }
}

void Graph::displayRandomAdjacencyMatrix(){
    cout << "\nAdjacency Matrix:\n";
    cout << "   ";
    for(int i=0; i<= randNumVertices; i++){
        cout << "\033[1;36m" << lettring[i-1] << "\033[0m"<< " ";
    }
    cout << endl;
    cout << "    ";
    for(int i=1; i<= randNumVertices; i++){
    cout <<"\033[1;33m_\033[0m"<< " ";
    }
    cout << endl;
    for (int i = 1; i <= randNumVertices; ++i) {
        cout << "\033[1;36m" <<lettring[i-1] << "\033[0m"<<" "<<"\033[1;33m|\033[0m"<<" ";
        for (int j = 1; j <= randNumVertices; ++j) {
            if(randAdjMatrix[i][j] == 0){
                cout << "\033[1;31m"<<randAdjMatrix[i][j] <<"\033[0m"<< " ";
            }
            if(randAdjMatrix[i][j] == 1){
                cout << "\033[1;32m" <<randAdjMatrix[i][j] <<"\033[0m"<< " ";
                randEdgeCount++;
            }    
        }
        cout << "\n";
    }
}

void Graph::generateRandomGraph(){
    int count = 0;
    if(randNumVertices == 0){
        cout << "Graph Could not be generated"<<endl;
    }else{
        for(int j=1; j<=randNumVertices; j++){
            cout << "\033[1;31m"<<lettring[j-1] <<"\033[0m"<< "\033[1;33m->\033[0m " <<"\033[1;36m{\033[0m ";
            for(int i=1; i<= randNumVertices; i++){
                if(randAdjMatrix[j][i] == 1){
                    cout<<"\033[1;32m" << lettring[i-1] <<"\033[0m" << " ";
                    count = 1;
                }
            }
             if(count == 0){
                    cout << "\033[1;32mIsolated Vertex\033[0m ";
                }
            count = 0;
            cout <<"\033[1;36m}\033[0m" <<endl;
        }
    }
}

void Graph::operationList(){
    cout << "0. Get Operation List!\n";
    cout << "1. Check Graph Status?\n";
    cout << "2. Check is Graph Directed?\n";
    cout << "3. Add Vertex!\n";
    cout << "4. Add Edge!\n";
    cout << "5. Remove Edge!\n";
    cout << "6. Remove Vertex!\n";
    cout << "7. Show Number of Vertices!\n";
    cout << "8. Show Number of Edge!\n";
    cout << "9. Show Degree of Vertex!\n";
    cout << "10. Show Indegree of Vertex!\n";
    cout << "11. Show Outdegree of Vertex!\n";
    cout << "12. Show Neighbour of Vertex\n";
    cout << "13. Check if Vertex1 is Neighbour to Vertex2!\n";
    cout << "14. Display Adjacency Matrix!\n";
    cout << "15. Generate Graph Corresponding to Adjacency Matrix!\n";
    cout << "16. Generate Random Graph!\n";
    cout << "17. Exist\n";
}