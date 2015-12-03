#include <stdio.h>

int main()
{
	int i;
	int a, b;

	scanf("%d %d", &a, &b);

	for(i=((a%2)?a:a+1); i<= b; i+=2)
	{
		printf("%d\n", i);
	}


	return 0;
}