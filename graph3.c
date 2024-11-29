#include<stdio.h>
#define max 43
void inputGraph(int graph[max][max],int vertices)
{
	int i,j;
	for(i=0;i<vertices;i++)
	{
		for(j=0;j<vertices;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
}

void transposeGraph(int transpose[max][max],int graph[max][max],int vertices)
{
	int i,j;
	for(i=0;i<vertices;i++)
	{
		for(j=0;j<vertices;j++)
		{
			transpose[j][i] = graph[i][j];
		}
	}
}

void displayGraph(int graph[max][max],int vertices)
{
	int i,j;
	printf("Adjacency matrix:\n");
	for(i=0;i<vertices;i++)
	{
		for(j=0;j<vertices;j++)
		{
			printf("%d ",graph[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int graph[max][max]= {0};
	int transpose[max][max]={0};
	int vertices;
	printf("Enter number of vertices: ");
	scanf("%d",&vertices);
	inputGraph(graph,vertices);
	printf("Original graph:\n");
	displayGraph(graph,vertices);
	transposeGraph(transpose,graph,vertices);
	printf("Transpose graph:\n");
	displayGraph(transpose, vertices);
	return 0;
}
