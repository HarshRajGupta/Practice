#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf
#define for(i,a,b,c) for(int i = a; i < b; i+=c)

int main(int argc, char const *argv[])
{
	p("Number of vertex : ");
	int vertex;
	s("%d", &vertex);
	int **Arr = (int**)malloc(vertex*sizeof(int*));
	for(i, 0, vertex, 1)
	{
		Arr[i] = (int*)calloc(vertex, sizeof(int));
	}
	p("Number of edges : ");
	int edge;
	s("%d", &edge);
	p("\nEnter location of each undirected edges\n");
	for(i, 0, edge, 1)
	{
		int x, y;
		s("%d %d", &x, &y);
		Arr[x-1][y-1] = 1;
		Arr[y-1][x-1] = 1;
	}

	// Printing of Matrix
	p("\n++++----++++----++++----++++----++++\n");
	for(i, 0, vertex, 1)
	{
		for(j, 0, vertex, 1)
		{
			p("%d\t", Arr[i][j]);
		}
		p("\n");
	}
	p("++++----++++----++++----++++----++++\n");
	return 0;
}