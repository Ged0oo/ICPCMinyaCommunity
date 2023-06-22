#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long int a, b;
	cin >> a >> b;
	if((a>0) && (b>0)) cout << "Positive";
	else if (a <= 0 && b >= 0) cout << "Zero";
	else
	{
		long long int n = abs(a - b) + 1;
		if (n % 2 == 0) cout << "Positive" << endl;
		else cout << "Negative" << endl;
	}
	return 0;
}