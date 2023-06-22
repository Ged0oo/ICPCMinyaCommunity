#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int a;
	int sum=0;
	cin >> a;

	while (a)
	{
		sum += a % 10;
		a /= 10;
	}
	
	cout << sum << endl;

	return 0;
}