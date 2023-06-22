#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	char ch;
	cin >> ch;

	if ((ch >= 65) && (ch <= 90)) cout << "capital " << (int)(ch - 65);
	else if ((ch >= 97) && (ch <= 122)) cout << "small " << (int)(ch - 97);
	else if ((ch >= 48) && (ch <= 57)) cout << "digit ";
	else cout << "symbol";
	
	return 0;
}