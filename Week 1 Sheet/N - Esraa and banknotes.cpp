#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	int a_50=0 , a_20=0 , a_1=0 ;
	cin >> n;
	
	if (n >= 50)
	{
		a_50 = n / 50;
		n = n - (50 * a_50);
	}

	if (n >= 20)
	{
		a_20 = n / 20;
		n = n - (20 * a_20);
	}
	a_1 = n;
	cout << a_1 + a_20 + a_50;
	return 0;
}
