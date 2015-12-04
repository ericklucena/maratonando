#include <stdio.h>
#include <stdbool.h>

void printGrid(int grid[][25], int size)
{
	int i, j;

	for (i=0; i<size; i++)
	{
		printf("%d:", i);
		for (j = 0; j < size && grid[i][j] != -1; j++)
		{
			printf(" %d", grid[i][j]);
		}
		printf("\n");
	}
}

int main ()
{
	int i, j;
	int n;
	int a, b;
	int pile;
	int pile2;
	int block;
	int height;
	char commandA[5], commandB[5];

	int grid[25][25];
	int whereToLook[25];

	for(i=0; i<25; i++)
	{
		whereToLook[i]=i;
		for(j=0;j<25;j++)
		{
			grid[i][j]=-1;
		}
		grid[i][0] = i;
	}

	scanf("%d", &n);

	while (true)
	{
		scanf("%s", commandA);
		{
			if(commandA[0] == 'q')
			{
				break;
			}

			scanf("%d %s %d", &a, commandB, &b);

			if(whereToLook[a] == whereToLook[b] || a == b)
			{
				continue;
			}

			if(commandA[0]=='m')
			{
				if(commandB[1] == 'n')	
				{
					pile = whereToLook[a];

					for (i=0;grid[pile][i]!=a;i++);

					for (j=i+1;(block = grid[pile][j])!=-1;j++) 
					{
						grid[block][0] = block;
						grid[pile][j] = -1;
						whereToLook[block] = block;
					}

					grid[pile][i] = -1;

					pile = whereToLook[b];

					for (i=0;grid[pile][i]!=b;i++);

					for (j=i+1;(block = grid[pile][j])!=-1;j++) 
					{
						grid[block][0] = block;
						grid[pile][j] = -1;
						whereToLook[block] = block;
					}

					grid[pile][i+1] = a;
					whereToLook[a] = pile;
				}
				else
				{
					pile = whereToLook[a];

					for (i=0;grid[pile][i]!=a;i++);

					for (j=i+1;(block = grid[pile][j])!=-1;j++) 
					{
						grid[block][0] = block;
						grid[pile][j] = -1;
						whereToLook[block] = block;
					}

					grid[pile][i] = -1;

					pile = whereToLook[b];

					for (i=0;grid[pile][i]!=-1;i++);

					grid[pile][i] = a;
					whereToLook[a] = pile;
				}
			}
			else
			{
				if(commandB[1] == 'n')	
				{
					pile = whereToLook[b];

					for (i=0;grid[pile][i]!=b;i++);

					for (j=i+1;(block = grid[pile][j])!=-1;j++)
					{
						grid[block][0] = block;
						grid[pile][j] = -1;
						whereToLook[block] = block;
					}

					height = i+1;

					pile2 = whereToLook[a];

					for (i=0;grid[pile2][i]!=a;i++);

					for (j=i;(block = grid[pile2][j])!=-1;j++, height++) 
					{
						grid[pile][height] = block;
						grid[pile2][j] = -1;
						whereToLook[block] = pile;
					}

				}
				else
				{
					pile = whereToLook[b];

					for (i=0;grid[pile][i]!=-1;i++);

					height = i;

					pile2 = whereToLook[a];

					for (i=0;grid[pile2][i]!=a;i++);

					for (j=i;(block = grid[pile2][j])!=-1;j++, height++)
					{
						grid[pile][height] = block;
						grid[pile2][j] = -1;
						whereToLook[block] = pile;
					}
				}
			}
		}
	}

	printGrid(grid, n);
	
	return 0;
}