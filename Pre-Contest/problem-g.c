#include <stdio.h>

int main ()
{
	int n;
	int i;
	char unit[5];
	double value;

	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		scanf("%lf %s", &value, unit);

		if (unit[0] == 'k')
		{
			printf("%d %.4lf lb\n", i+1, value*2.2046);
		}
		else if (unit[0] == 'g')
		{
			printf("%d %.4lf l\n", i+1, value*3.7854);
		}
		else
		{
			if (unit[1]=='b')
			{
				printf("%d %.4lf kg\n", i+1, value*0.4536);
			}
			else
			{
				printf("%d %.4lf g\n", i+1, value*0.2642);
			}
		}

	}

	return 0;
}