#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

class GraphNode
{

public:

	string data;

	std::unordered_map<GraphNode*, int> edges;

	GraphNode(string mData);
	void AddEdge(GraphNode* neiborghNode, int weight = 1);

};
