#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b,s_a=0, s_b=0;
	cin >> a >> b;
	for (int i = 0; i < 3; i++)
	{
		s_a += a % 10;
		a /= 10;
		s_b += b % 10;
		b /= 10;
	}
	cout << max(s_a, s_b);
	return 0;
}