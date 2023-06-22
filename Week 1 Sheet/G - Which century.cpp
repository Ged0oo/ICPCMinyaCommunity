#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int a, n;
	cin >> a;
	n = a / 100;
	if (a % 10) n++;
	cout << n;

	return 0;
}