#include <stdio.h>
#include <string.h>

int main ()
{
	char a, b;

	scanf("%c%c", &a, &b);

	if(b!='0')
	{
		printf("%c", b);
	}
	printf("%c\n", a);

	return 0;
}