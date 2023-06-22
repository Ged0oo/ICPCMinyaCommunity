#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	long long int a, h=0, m=0, s=0;
	cin >> a;
	
	if (a >= 3600)
	{
		h = a / 3600;
		a = a - (3600 * h);
	}

	if (a >= 60)
	{
		m = a / 60;
		a = a - (60 * m);
	}
	s = a;
	cout << h << " " << m << " " << s;
	return 0;
}