#include <stdio.h>

int main ()
{
	int i, j;
	int value;
	int backtrack[7500] = {0};
	int coins[5] = {1, 5, 10, 25, 50};

	backtrack[0] = 1;

	for(i = 0; i < 5; i++)
	{
        for(j = coins[i]; j <= 7489; ++j)
        {
            backtrack[j] += backtrack[j-coins[i]];
        }
    }

	while(scanf("%d", &value)!= EOF)
	{
		printf("%d\n", backtrack[value]);
	}

	return 0;
}

