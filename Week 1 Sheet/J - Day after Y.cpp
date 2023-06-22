#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int x, y, c;
	cin >> x >> y;
	if(y>7) y %= 7;
	

	c = x + y;
	if (c > 6) c -= 7;

	cout << c << endl;

	return 0;
}