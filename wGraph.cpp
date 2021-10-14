#include "wGraph.h"

wGraph::wGraph()
{
	vector<edge> E;
	edge e;
	int n, i = 0; // i finally will show the number of nodes
	cout << "please enter source, dest, weight of your graph and if you have nothing to enter a NEGATIVE number:\n" << "enter the sorce:\n";
	cin >> n;
	while (n >= 0)
	{
		e.src = n;
		if (i < n)
			i = n;
		cout << "enter the dest:\n";
		cin >> e.dest;
		if (i < e.dest)
			i = e.dest;
		cout << "enter the weight:\n";
		cin >> e.weight;
		E.push_back(e);
		cout << "enter the next sorce:\n";
		cin >> n;
	}
	if (i >= 0)
	{
		N = i + 1;
		g.resize(N);
		for (int i = 0;i < E.size();i++)
			g[E[i].src].push_back({ E[i].dest, E[i].weight });
	}
	
}

wGraph::wGraph(vector<edge> E, int N)
{
	g.resize(N);
	for (int i = 0;i < E.size();i++)
		g[E[i].src].push_back({ E[i].dest, E[i].weight });
}
//-------------------------------------------------------------
void wGraph::print()
{
	for (int i = 0;i < this->g.size();i++)
	{
		cout << i << "-> ";
		for (int j = 0;j < this->g[i].size();j++)
		{
			cout << this->g[i][j].a[0] << "," << g[i][j].a[1] << " ";
		}
		cout << "\n";
	}
}
//-------------------------------------------------------------
bool wGraph::findConnection(int s, int d)
{
	int i;
	for (i = 0;i < this->g[s].size();i++)
		if (this->g[s][i].a[0] == d)
			return true;
	for (i = 0;i < this->g[d].size();i++)
		if (this->g[d][i].a[0] == s)
			return true;
	return false;
}
//-------------------------------------------------------------
bool wGraph::findRelationship(int s, int d)
{
	if (findConnection(s, d))
		return true;
	else
	{
		int i,j;
		for (i = 0;i < this->g[s].size();i++)
		{
			if (findConnection(this->g[s][i].a[0], d))
				return true;
		}
		for (i = 0;i < this->g[d].size();i++)
		{
			if (findConnection(this->g[d][i].a[0], s))
				return true;
		}
	}
	return false;
}
//-------------------------------------------------------------

