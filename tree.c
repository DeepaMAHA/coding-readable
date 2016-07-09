#include<stdio.h>
#include<limits.h>
int main()
{
#define V 5
int minKey(int key[], bool mSet[])
{
int min = INT_MAX, min_index;

for (int v = 0; v < V; v++)
	if (mstSet[v] == false && key[v] < min)
		min = key[v], min_index = v;

return min_index;
}
int printM(int parent[], int n, int g[V][V])
{
printf("Edge Weight\n");
for (int i = 1; i < V; i++)
	printf("%d - %d %d \n", parent[i], i, g[i][parent[i]]);
}

void primM(int g[V][V])
{
	int parent[V]; 
	int key[V]; 
	bool mSet[V]; 

	for (int i = 0; i < V; i++)
		key[i] = INT_MAX, mSet[i] = false;

	key[0] = 0;	
	parent[0] = -1; 

	for (int count = 0; count < V-1; count++)
	{

		int u = minKey(key, mSet);

		mSet[u] = true;

		for (int v = 0; v < V; v++)

		if (graph[u][v] && mSet[v] == false && g[u][v] < key[v])
			parent[v] = u, key[v] = g[u][v];
	}

	printM(parent, V, g);
}

int main()
{

int g[V][V] = {{0, 2, 0, 6, 0},
					{2, 0, 3, 8, 5},
					{0, 3, 0, 0, 7},
					{6, 8, 0, 0, 9},
					{0, 5, 7, 9, 0},
					};
	primM(g);
	return 0;
	}
