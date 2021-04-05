#include "Graph.h"


void Graph::BFS(int s)
{
	std::cout << "BFS: ";

	int size = graphData.size();

	if (s > size - 1)
	{
		std::cout << "Nodo no valido !" << std::endl;
		return;
	}

	bool* visited = new bool[size];

	for (int i = 0; i < size; i++)
	{
		visited[i] = false;
	}

	std::queue<int> bfsQueue;

	visited[s] = true;
	bfsQueue.push(s);

	list<int>::iterator i;


	while (!bfsQueue.empty())
	{
		s = bfsQueue.front();
		cout << s << ",";
		bfsQueue.pop();

		GraphNode* graphNode = graphData[s];

		for (std::pair<GraphNode*, int> element : graphNode->edges)
		{
			int nodeIndex = GetID(element.first);

			if (!visited[nodeIndex])
			{
				visited[nodeIndex] = true;
				bfsQueue.push(nodeIndex);
			}

		}

	}

	std::cout << std::endl;
}

int Graph::AddNode(string Data)
{
	int currentIndex = graphData.size();

	graphData.push_back(new GraphNode(Data));

	return currentIndex;
}

void Graph::AddEdge(int nodeID, int neighborID, int weight)
{
	if (graphData[nodeID] == nullptr || graphData[neighborID] == nullptr)
	{
		std::cout << "invalid insertion" << endl;
		return;
	}

	graphData[nodeID]->AddEdge(graphData[neighborID], weight);

}

int Graph::GetID(GraphNode* node)
{
	std::vector<GraphNode*>::iterator itr = std::find(graphData.begin(), graphData.end(), node);

	if (itr != graphData.cend())
	{
		return std::distance(graphData.begin(), itr);
	}

}

void Graph::DisplayGraph()
{
	for (int i = 0; i < graphData.size(); i++)
	{
		std::cout << "[" << i << "] -> ";
		for (std::pair<GraphNode*, int> element : graphData[i]->edges)
		{
			std::cout << GetID(element.first) << "(" << element.second << "), ";

		}
		std::cout << endl;
	}
}