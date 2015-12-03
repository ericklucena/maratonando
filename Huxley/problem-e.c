#include <stdio.h>

int main()
{
	int a, b, c;
	double media;

	scanf("%d %d %d", &a, &b, &c);

	media = (double) (a+b+c)/3.0;

	if (media >= 7.0)
	{
		printf("aprovado\n");
	}
	else if(media >= 3)
	{
		printf("prova final\n");
	}
	else
	{
		printf("reprovado\n");
	}

	return 0;
}