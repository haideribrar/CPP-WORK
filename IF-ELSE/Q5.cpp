#include<iostream>
using namespace std;
int main() {
	int a, b;
	char x;
	cout << "Enter any two numbers" << endl;
	cin >> a;
	cin >> b;
	cin >> x;
	if (x == '+')
	{
		cout << "Addition:" << a + b;
	}
	else if (x == '-')
	{
		cout << "Subtration:" << a - b;
	}
	else if (x == '*')
	{
		cout << "Multiplication:" << a * b;
	}
	else if (x == '%')
	{
		cout << "Modulus:" << a % b;
	}
	else if (x == '/')
	{
		if (b == 0)
		{
			cout << "Invalid Input.Enter a new number other then 0" << endl;
			cin >> b;
			cout << "Division" << a / b;
		}
		else
		{
			cout << "Division" << a / b;
		}
	}
	else
	{
		cout << "Invalid input";
	}
}