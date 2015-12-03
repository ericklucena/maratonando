#include <stdio.h>

//SPOJ - AMR10F


int main ()
{
	int iterations;
	int n, a, d;

	int cookies;
	int pile;

	scanf("%d", &iterations);

	for (int i=0; i<iterations; i++)
	{
		scanf("%d %d %d", &n, &a, &d);

		cookies = 0;
		pile = a;

		for (int j = 0; j < n; j++)
		{
			cookies += pile;
			pile += d;
		}
		printf("%d\n", cookies);
	}


}