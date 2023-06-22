#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[5] = {1,2,3,4,5};
	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		if (flag == arr[i]) flag = i + 1;
	}
	cout << flag;
	return 0;
}