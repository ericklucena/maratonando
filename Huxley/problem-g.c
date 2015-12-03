#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	double delta;

	scanf("%lf %lf %lf", &a, &b, &c);

	if (a==0)
	{
		printf("NEESG\n");
	}
	else
	{
		delta = (b*b)-(4*a*c);


		if (delta < 0)
		{
			printf("NRR\n");
		}
		else
		{
			printf("%.2lf\n", ((-b)+sqrt(delta))/(2*a));
			printf("%.2lf\n", ((-b)-sqrt(delta))/(2*a));
		}
	}

	return 0;
}