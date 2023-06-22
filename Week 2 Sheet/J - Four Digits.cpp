#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, n1, n2 ,n3, n4;
	cin >> n;

	n1 = n % 10;

	n /= 10;
	n2 = n % 10;

	n /= 10;
	n3 = n % 10;

	n /= 10;
	n4 = n % 10;

	cout << n4<<n3<<n2<<n1;
	return 0;
}