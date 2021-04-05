
#include <iostream>
#include "Graph.h"

int main()
{
	Graph graph;
		
	int node0 = graph.AddNode("0");
	int node1 = graph.AddNode("1");
	int node2 = graph.AddNode("2");
	int node3 = graph.AddNode("3");
	int node4 = graph.AddNode("4");
	int node5 = graph.AddNode("5");
	int node6 = graph.AddNode("6");
	int node7 = graph.AddNode("7");

	graph.AddEdge(node0, node2);	//0--->2	
	graph.AddEdge(node0, node1);		
	graph.AddEdge(node2, node3);		
	graph.AddEdge(node2, node5);		
	graph.AddEdge(node3, node4);		
	graph.AddEdge(node1, node6);
	graph.AddEdge(node7, node4);
	graph.AddEdge(node4, node5);
	graph.AddEdge(node6, node7);
	
	std::cout << "\nGrafo en lista de adyacencia: \n" << std::endl;
	graph.DisplayGraph();

	std::cout << "\nOrden Topologico\n" << std::endl;
	graph.BFS(node0);

	

}

