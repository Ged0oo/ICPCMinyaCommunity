#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int x, y;
	char ch;
	cin >> x >> y >> ch;
	switch (ch)
	{
	case '+':
			cout << x + y;
			break;

	case '-':
		cout << x - y;
		break;

	case '*':
		cout << x * y;
		break;

	case '/':
		cout << x / y;
		break;
	}

	return 0;
}