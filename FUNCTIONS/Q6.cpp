#include<iostream>
using namespace std;
int factorial(int a)
{
	if (a == 0 || a == 1)
	{
		return 1;
	}
	else
	{
		int fac;
		fac = a * factorial(a - 1);
		return fac;
	}
}
int main()
{
	int a;
	cout << "Enter the Number whose Factorial you want: ";
	cin >> a;
	if (a < 0)
	{
		cout << "Invalid Input";
		return 0;
	}
	cout << "Factorial of " << a << " is " << factorial(a);
	return 0;
}