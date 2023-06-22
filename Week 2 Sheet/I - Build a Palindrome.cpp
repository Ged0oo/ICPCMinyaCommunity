#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, n1, n2 ,n3;
	cin >> n;
	n1 = n % 10;

	n /= 10;
	n2 = n % 10;
	n /= 10;
	n3 = n % 10;

	if (n3 == n1) cout << n3 << n2 << n1;
	else if (n3 == n2) cout << n3 << n1 << n2;
	else if (n2 == n1) cout << n2 << n3 << n1;
	else cout << "Impossible";
	return 0;
}