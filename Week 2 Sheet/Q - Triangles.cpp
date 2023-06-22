#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || b + c <= a || a + c <= b || (a <= 0 || b <= 0 || c <= 0)) cout << "Invalid";
	else if (a == b && b == c) cout << "Equilateral";
	else if (a == b || b == c || a == c) cout << "Isosceles";
	else cout << "Scalene";
	return 0;
}