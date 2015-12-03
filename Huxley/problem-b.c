#include <stdio.h>
#include <string.h>

int main ()
{
	char name[130];

	gets(name);

	printf("Seja muito bem-vindo %s\n", name);

	return 0;
}