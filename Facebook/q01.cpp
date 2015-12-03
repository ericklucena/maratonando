#include <iostream>

using namespace std;

//SPOJ - FATORIA2

int main()
{
	int results[13] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};

	int input;

	cin >> input;

	cout << results[input] << endl;

	return 0;
}