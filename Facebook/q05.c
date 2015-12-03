#include <stdio.h>

//SPOJ - METEORO

int main ()
{
	int x1, y1, x2, y2;
	int xM, yM;
	int nMeteors;
	int counter;

	for(int teste =1;;teste++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if(x1==0 && y1==0 && x2==0 && y2==0)
		{
			break;
		}

		scanf("%d", &nMeteors);
		counter = 0;
		for (int i = 0; i < nMeteors; i++)
		{
			scanf("%d %d", &xM, &yM);
			if((xM>=x1 && xM <= x2) && (yM<=y1 && yM >= y2))
			{
				counter++;
			}
		}

		printf("Teste %d\n", teste);
		printf("%d\n\n", counter);

	}

}
