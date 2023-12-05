/* A C Programme to define the example of Data Structure */
#include<stdio.h>
#include<conio.h>
#define MAX 100
int adj[MAX][MAX];
int n;
void main()
{
	int max_edge, i, j, origin, destin;
	int graph_type;
	printf("\n 1 For Undirected Graph, 2 For Directed Graph ");
	scanf("%d", &graph_type);
	printf("\n Enter No. of Vertices ");
	scanf("%d", &n);
	if(graph_type==1)
	max_edge=n*(n-1)/2;
	else
	max_edge=n*(n-1);
	for(i=0;i<max_edge;i++)
	{
		printf("\n Enter Edge %d(-1, -1 to Quit)", i);
		scanf("%d%d", &origin, &destin);
		if(origin==-1 && destin==-1)
		break;
		if(origin>=n||destin>=n||origin<0||destin<0)
		{
			printf("\n Invalid Edge ");
			i--;
		}
		else
		{
		adj[origin][destin]=1;
		if(graph_type==1)
		adj[destin][origin]=1;
		}
	}
	printf("\n The Adjacency Matrix ");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		printf("%d",adj[i][j]);
		printf("\n");
	}
}