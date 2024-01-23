#pragma once

#include <iostream>

using namespace std;
 
class Graph {
    private:
        int numEdge=0, numInDegree=0, numOutDegree=0, degree=0;
        int adjMatrix[26][26];
    
    public:
        int numVertices=0;
        int check = false;

        Graph(int v);
        bool isEmpty();
        bool isDirected();
        void addVertex();
        void addEdge(int v1, int v2);
        void removeEdge(int v1, int v2);
        void removeVertex(int v);
        int numOfVertices();
        int numOfEdge();
        int Degree(int v);
        int outDegree(int v);
        int inDegree(int v);
        void setDegreeZero();
        void neighbourOfVertex(int v);
        bool V1NeighbourToV2(int v1, int v2);
        void displayAdjacencyMatrix();
        void operationList();
        void generateGraph();

        //Bonus Task starts here
        int randNumVertices=0;
        int randAdjMatrix[26][26];
        void setRandAdjMatrix(int v);
        void addRandEdge(int e);
        void displayRandomAdjacencyMatrix();
        void generateRandomGraph();
};
 
