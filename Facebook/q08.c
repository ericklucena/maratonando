#include <stdio.h>

int main()
{
	int n, x;
	int factor;
	int count=0;

	scanf("%d %d", &n, &x);

	for (int i = 1; i<=n; i++)
	{
		if (x%i==0)
		{
			factor = x / i;
			if (factor<=n)
			{
				count++;
			}
		}
	}

	printf("%d\n", count);

	return 0;
}