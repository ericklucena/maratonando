#include <iostream>

using namespace std;

//SPOJ - MINHOCA

int main()
{
	int lines, columns;
	int maxSum = 0;
	int sum;

	cin >> lines >> columns;

	int grid[lines][columns];

	for (int i = 0; i < lines; i++)
	{
		sum = 0;
		for (int j = 0; j < columns; j++)
		{
			cin >> grid[i][j];
			sum += grid[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
		}
		
	}

	for (int j = 0; j < columns; j++)
	{
		sum = 0;
		for (int i = 0; i < lines; i++)
		{
			sum += grid[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
		}
	}

	cout << maxSum << endl;

	return 0;
}