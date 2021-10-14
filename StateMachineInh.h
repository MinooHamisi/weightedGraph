#pragma once
#include "wGraph.h"
class StateMachineInh :
    public wGraph
{
private:
    vector<int> SF; //start and finish (0,0)=> it is not a start and finish Node 
                      //(1,0)=> it is a start Node but it is not a finish Node
public:
    StateMachineInh(vector<edge> E, int N, vector<int> sf);
    StateMachineInh();
    void print() override;
};

