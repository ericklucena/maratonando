#include <stdio.h>

int main ()
{
	int n;
	int i;
	int dX, dY;
	int x, y;

	while(1)
	{
		scanf("%d", &n);
		if(n)
		{
			scanf("%d %d", &dX, &dY);

			for (i=0; i<n; i++)
			{
				scanf("%d %d", &x, &y);

				if (x == dY || y == dX || x == dX || y == dY)
				{
					printf("divisa\n");
				}
				else if (x > dX && y > dY)
				{
					printf("NE\n");
				}
				else if(x>dX && y<dY)
				{
					printf("SE\n");
				}
				else if(x<dX && y<dY)
				{
					printf("SO\n");
				}
				else
				{
					printf("NO\n");
				}
			}
		}
		else
		{
			break;
		}
	}


	return 0;
}