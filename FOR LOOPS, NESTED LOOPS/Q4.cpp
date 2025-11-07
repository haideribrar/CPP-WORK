#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Enter Size OF Diamond: ";
	cin >> a;
	if (a <= 0)
	{
		cout << "Invalid Input";
	}
	b = a / 2;
	c = a - b;
	int d = 0, counter = 0, e = 0;
	for (int i = 1; i <= c; i++)
	{
		counter = 0;
		for (int j = 1; j <= c - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i + d; k++)
		{
			cout << "*";
			counter++;
		}
		d++;
		cout << endl;
	}
	for (int i = 1; i <= b; i++)
	{
		if (a % 2 == 0)
		{
			for (int j = i - 2; j >= 0; j--)
			{
				cout << " ";

			}
		}
		if (a % 2 != 0)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				cout << " ";

			}
		}
		if (a % 2 == 0)
		{
			for (int k = counter; k >= i + e; k = k - 1)
			{
				cout << "*";
			}
			e++;
		}
		else if (a % 2 != 0)
		{
			for (int k = counter - 2; k >= i + e; k--)
			{
				cout << "*";
			}
			e++;
		}
		cout << endl;
	}
}