#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

int main ()
{
	
	int iterations;
	int size;
	bool valid;
	string expression;

	cin >> iterations;
	getchar();

	for (int k=0; k < iterations; k++)
	{
		stack<char> expr;
		getline(cin, expression);

		size = expression.size();
		valid = true;

		for (int i=0; i<size && valid; i++)
		{
			if(expression[i]== '[' || expression[i]=='(')
			{
				expr.push(expression[i]);
				
			}
			else if (expression[i]==')' && !expr.empty() && (expr.top() == '('))
			{
				expr.pop();
			}
			else if (expression[i]==']' && !expr.empty() && (expr.top() == '['))
			{
				expr.pop();
			}
			else
			{
				valid = false;
			}
		}

		if (valid && expr.empty())
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}

	return 0;
}