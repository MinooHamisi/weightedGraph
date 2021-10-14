// weighted graph.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "wGraph.h"
#include "StateMachineInh.h"
using namespace std;

int main()
{
    int n, i;
    StateMachineInh Stm;
    Stm.print();

    cout << "enter 2 nodes and check wheter there is a connection between them or not:\n";
    cin >> n >> i;
    if (Stm.findConnection(n, i))
        cout << "YES! there is an edge between them.\n";
    else
        if (Stm.findRelationship(n, i))
            cout << "there isn't any edges between them, BUT there is a relationship between them.\n";
        else
            cout << "NO! there isn't any edges and relationships between them!\n";
    return 0;
}


