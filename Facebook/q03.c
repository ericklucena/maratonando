#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//SPOJ - PAPRIMAS

bool isPrime(int n)
{
	int stop = sqrt(n);

	if (n > 2)
	{
		for (int i=2; i<=stop; i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
	}

	return true;
}

int stringToNumber(char* s)
{
	int sum = 0;

	int stop = strlen(s);
	for (int i=0; i < stop; i++)
	{
		if(s[i] < 'a')
		{
			sum += s[i]-'A'+27;
		}
		else
		{
			sum += s[i]-'a'+1;
		}
	}

	return sum;
}

int main()
{
	char s[21];

	while(scanf("%s", s) != EOF)
	{

		if(isPrime(stringToNumber(s)))
		{
			printf("It is a prime word.\n");
		}
		else
		{
			printf("It is not a prime word.\n");
		}
		
	}

	return 0;
}
