#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	unsigned char ch;
	int n;
	cin >> ch >> n;

	if (n >= 26) n %= 26;

	
	ch = (char)(ch + n);
	while (ch > 122)
	{
		ch -= 26;
	}
	
	cout << ch;
	return 0;
}