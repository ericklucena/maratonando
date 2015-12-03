#include <stdio.h>

int main ()
{
	int n;
	int value;
	int sum = 0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &value);
		sum += value;
	}

	printf("%d\n", sum);

	return 0;
}