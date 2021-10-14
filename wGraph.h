#pragma once
#include <iostream>
#include<vector>
using namespace std;

struct edge
{
	int src, dest, weight;
};
struct int2
{
	int a[2]; //  d=dest,w=weight
};
//------------------Weighted Graph-----------------------
class wGraph
{
protected:
	vector<vector<int2>> g;
	int N;  //number of nodes
public:
	wGraph();
	wGraph(vector<edge> E, int N);
	virtual void print();
	bool findConnection(int s, int d);
	bool findRelationship(int s, int d);
};

