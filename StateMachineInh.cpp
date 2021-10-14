#include "StateMachineInh.h"
#include"wGraph.h"

StateMachineInh::StateMachineInh(vector<edge> E, int N, vector<int> sf)
{
	SF = sf;
}

StateMachineInh::StateMachineInh()
{
	//vector<int2> sf;
	int k;
	SF.resize(N);
	for (int i = 0;i < N;i++)
	{
		cout << "if Node " << i << " is not a start Node or finish Node enter 1\n";
		cout << "if Node " << i << " just is a start Node enter 2\n";
		cout << "if Node " << i << " just is a finish Node enter 3\n";
		cout << "if Node " << i << " is a start AND finish Node enter 4\n";
		cin >> k;
		SF[i] = k;
	}
}

void StateMachineInh::print()
{
	for (int i = 0;i < this->g.size();i++)
	{
		cout << i ;
		switch (SF[i])
			{
			case 1:
				cout << " is not a start Node or finish Node -> ";
				break;
			case 2:
				cout << " is a start Node ->";
				break;
			case 3:
				cout << " is a finish Node ->";
				break;
			case 4:
				cout << " is a start AND finish Node ->";
				break;
			default:
				break;
			}
		for (int j = 0;j < this->g[i].size();j++)
		{
			cout << this->g[i][j].a[0] << "," << g[i][j].a[1] << " ";
			
		}
		cout << "\n";
	}

}
