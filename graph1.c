#include<stdio.h>
#define v 4
void intialize(int arr[v][v])
{
	int i,j;
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			arr[i][j] = 0;
		}
	}
}

void addEdge(int arr[v][v],int i,int j)
{
	arr[i][j] = 1;
	arr[j][i] = 1;
}

void printAdjMatrix(int arr[v][v])
{
	int i,j;
	for(i=0;i<v;i++)
	{
		printf("%d: ",i);
		for(j=0;j<v;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int adjMatrix[v][v];
	intialize(adjMatrix);
	addEdge(adjMatrix,0,1);
	addEdge(adjMatrix,0,2);
	addEdge(adjMatrix,1,2);
	addEdge(adjMatrix,2,0);
	addEdge(adjMatrix,2,3);
	printAdjMatrix(adjMatrix);
	return 0;
}
