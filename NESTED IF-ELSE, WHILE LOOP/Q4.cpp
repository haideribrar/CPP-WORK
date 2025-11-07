#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Enter the three sides of a triangle:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "Invalid Input" << endl;
	}
	else if (a == b)
	{
		if (b == c)
		{
			cout << "Equilateral" << endl;
		}
	}
	else if (a != b)
	{
		if (b != c && a != c)
		{
			cout << "Scalene" << endl;
		}
	}
	else
	{
		cout << "Not a triangle" << endl;
	}
	if ((a == b && b != c) || (c == b && c != a) || (a == c && a != b))
	{
		cout << "Isosceles" << endl;
	}
	return 0;
}