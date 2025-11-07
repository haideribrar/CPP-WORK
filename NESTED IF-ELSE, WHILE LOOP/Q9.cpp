#include<iostream>
using namespace std;
int main() {
	int a, b, c = 0;
	cout << "Enter any number:";
	cin >> a;
	cout << "Enter Diviser:";
	cin >> b;
	if (b == 0)
	{
		cout << "Invalid Input";
	}
	else if (a > 0)
	{
		while ((b * c) != a)
		{
			c++;
		}
		cout << "Result: " << c << endl;
	}
	else if (a < 0)
	{
		while ((b * c) != a)
		{
			c--;
		}
		cout << "Result: " << c << endl;
	}

	return 0;
}