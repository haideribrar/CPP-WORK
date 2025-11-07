#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Enter any Positive Integer: ";
	cin >> a;
	if (a <= 0)
	{
		cout << "Invalid Input";
		return 0;
	}
	int i=1;
	for (; i <= a; i++)
	{
		if ((i * (i + 1) * (i + 2)) == a)
		{
			cout << a << " = " << i << "x" << i + 1 << "x" << i + 2;
			break;
		}
	}
	if((i * (i + 1) * (i + 2)) != a)
	{
		cout << "NO";
	}
	return 0;
}