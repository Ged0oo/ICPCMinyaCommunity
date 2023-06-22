#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int a, b;
	cin >> a >> b;
	float area = a * b - a - b + 1 ;
	cout << area;
	return 0;
}