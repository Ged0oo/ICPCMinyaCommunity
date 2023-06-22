#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int x_1, y_1, r, x_2, y_2;
	cin >> x_1 >> y_1 >> r >> x_2 >> y_2;

	if (pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2) <= pow(r, 2)) cout << "YES";
	else cout << "NO";

	return 0;
}