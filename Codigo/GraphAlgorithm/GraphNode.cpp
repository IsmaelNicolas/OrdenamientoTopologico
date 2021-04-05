#include "GraphNode.h"


GraphNode::GraphNode(string mData)
{
	data = mData;
}


void GraphNode::AddEdge(GraphNode* neiborghNode, int weight )
{
	std::unordered_map<GraphNode*, int>::const_iterator got = edges.find(neiborghNode);

	if (got != edges.end())
	{
		std::cout << "ya contiene arista" << endl;
		return;
	}

	edges.insert(std::pair<GraphNode*, int>(neiborghNode, weight));
}