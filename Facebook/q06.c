#include <stdio.h>
#include <stdbool.h>

#define SUDOKU_SIZE 9

int main()
{
	int iterations;
	int sudoku[9][9];
	bool valid = true;
	int testing;
	int testingH;
	int testingV;

	scanf("%d", &iterations);

	for (int i = 0; i< iterations; i++)
	{
		valid = true;
		//Reading
		for (int i = 0; i< SUDOKU_SIZE; i++)
		{
			for (int j = 0; j < SUDOKU_SIZE; j++)
			{
				scanf("%d", &sudoku[i][j]);
			}
		}

		//Checking quadrants
		for (int k = 0; k<9 && valid; k+=3)
		{
			for (int l = 0; l<9 && valid; l+=3)
			{
				testing = 1; //9!
				for (int i = 0; i< 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						testing *= sudoku[i+k][j+l];
					}
				}

				valid = (testing == 362880);
			}				
		}

		for (int i = 0; i< SUDOKU_SIZE && valid; i++)
		{
			testingH = 1;
			testingV = 1;
			for (int j = 0; j < SUDOKU_SIZE; j++)
			{
				testingH *= sudoku[i][j];
				testingV *= sudoku[j][i];
			}

			valid = (testingV == 362880) && (testingH == 362880);

		}

		printf("Instancia %d\n", i+1);
		if(valid)
		{
			printf("SIM\n");
		}
		else
		{
			printf("NAO\n");
		}
	}
}