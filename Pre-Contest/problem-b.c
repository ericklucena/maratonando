#include <stdio.h>

int main ()
{
	int people, money, hotels, weekends;

	int cost;
	int beds;

	int minValue;
	int totalCost;

	int i, j;

	while(scanf("%d %d %d %d", &people, &money, &hotels, &weekends) != EOF)
	{
		minValue = money+1;
		for(i=0; i<hotels; i++)
		{
			scanf("%d", &cost);

			for(j=0;j<weekends;j++)
			{
				scanf("%d", &beds);
				if(beds>=people)
				{
					totalCost = people*cost;
					if (totalCost<minValue)
					{
						minValue = totalCost;
					}
				}
			}
		}
		if(minValue<money)
		{
			printf("%d\n", minValue);
		}
		else
		{
			printf("stay home\n");
		}

	}


	return 0;
}