#include <iostream>
using namespace std;
int main() 
{

    int nodes, edges;
    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter number of edges: ";
    cin >> edges;

    int adjMatrix[100][100] = {};

    cout << "Enter " << edges << " edges:\n";
    for (int i=0; i<edges; i++) 
    {
        int u,v;
        cin >>u>>v;
        adjMatrix[u][v] = 1;
    }

    cout << "\nAdjacency Matrix (Directed Graph):\n";

    for (int i=0; i<nodes; i++) 
    {
        for (int j=0; j<nodes; j++) 
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}


