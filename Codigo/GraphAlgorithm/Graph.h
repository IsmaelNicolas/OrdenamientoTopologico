#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <stack>
#include "GraphNode.h"

using namespace std;

class Graph
{
protected:
	std::vector<GraphNode*> graphData;
public:
	Graph(){}

	void BFS(int s);
	int AddNode(string Data);
	void AddEdge(int nodeID, int neighborID, int weight = 1);
	int GetID(GraphNode* node);
	void DisplayGraph();
	
};


