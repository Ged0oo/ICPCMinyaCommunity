#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int result = (N % 2 == 0) ? N : N * 2;
	cout << result;
	return 0;
}