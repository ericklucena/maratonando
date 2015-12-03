#include <stdio.h>

int main()
{
	int n;
	int x1, y1, x2, y2;
	int sum = 0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		for (int i = x1-1; i < x2; i++)
		{
			for (int j = y1-1; j < y2; j++)
			{
				sum++;
			}
		}
	}

	printf("%d\n", sum);



	return 0;
}