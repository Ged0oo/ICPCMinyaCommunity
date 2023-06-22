#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || b + c <= a || a + c <= b || (a <= 0 || b <= 0 || c <= 0)) cout << "No More Triangles!";
	else
	{
		long long int mx = max(a, max(b, c));
		cout << mx*mx;
	}
		
	return 0;
}