
#include <bits/stdc++.h> 
using namespace std;  
#define INF 99999 
int V;


void printSolution(int **dist); 


void floydWarshall (int **graph) 
{ 
	
	int  i, j, k; 
	int **dist=new int*[V];
	for(int i=0;i<V;i++)
		dist[i]=new int[V];

	
	for (i = 0; i < V; i++) 
		for (j = 0; j < V; j++) 
			dist[i][j] = graph[i][j]; 

	
	for (k = 0; k < V; k++) 
	{ 
		
		for (i = 0; i < V; i++) 
		{ 
			
			for (j = 0; j < V; j++) 
			{ 
				if (dist[i][k] + dist[k][j] < dist[i][j]) 
					dist[i][j] = dist[i][k] + dist[k][j]; 
			} 
		} 
	} 

	
	printSolution(dist); 
} 

void printSolution(int **dist) 
{ 
	cout<<"The following matrix shows the shortest distances"
			" between every pair of vertices \n"; 
	for (int i = 0; i < V; i++) 
	{ 
		for (int j = 0; j < V; j++) 
		{ 
			if (dist[i][j] == INF) 
				cout<<"INF"<<"	 "; 
			else
				cout<<dist[i][j]<<"	 "; 
		} 
		cout<<endl; 
	} 
} 


int main() 
{ 
	cout<<"enter the number of nodes"<<endl;
	cin>>V;
	int **graph=new int*[V];
	for(int i=0;i<V;i++)
		graph[i]=new int[V];
		
	cout<<"enter the matrix:";
	for(int i=0;i<V;i++)
		for(int j=0;j<V;j++)
			cin>>graph[i][j];
	floydWarshall(graph); 
	return 0; 
} 
/* OUTPUT:
enter the number of nodes
4
enter the matrix:0 5 99999 10
99999 0 3 99999
99999 99999 0 1
99999 99999 99999 0
The following matrix shows the shortest distances between every pair of vertices 
0	 5	 8	 9	 
INF	 0	 3	 4	 
INF	 INF	 0	 1	 
INF	 INF	 INF	 0
*/
