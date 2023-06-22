#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long int n;
	cin >> n;

	if (n < 5) cout << "NO";
	else
	{
		long long int a = n / 15;
		n -= 15 * a;

		long long int b = n / 10;
		n -= 10 * b;

		long long int c = n / 5;
		n -= 5 * c;

		(n) ? cout<<"NO" : cout << a + b + c;
		
	}
	return 0;
}