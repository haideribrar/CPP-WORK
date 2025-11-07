#include<iostream>
using namespace std;
int sum(int a, int b)
{
	int sum = a + b;
	return sum;
}
int difference(int a, int b)
{
	int difference = a - b;
	return difference;
}
int mul(int a, int b)
{
	int mul = a * b;
	return mul;
}
float division(int a, int b)
{
	float div;
	div= a / b;
	return div;
}
int main()
{
	cout << "Enter a Number according to the function you want to perform: " << endl;
	cout << "1. Sum \n2. Difference \n3. Multiplication \n4. Division" << endl;
	int n;
	cin >> n;
	if (n < 1 || n > 4)
	{
		cout << "Invalid Input";
		return 0;
	}
	int a, b;
	switch(n)
	{
	case 1:
	{
		cout << "Enter the 1st Number: ";
		cin >> a;
		cout << "Enter the 2nd Number: ";
		cin >> b;
		cout << "Sum: " << sum(a, b);
		break;
	}
	case 2:
	{
		cout << "Enter the 1st Number: ";
		cin >> a;
		cout << "Enter the 2nd Number: ";
		cin >> b;
		cout << "Difference: " << difference(a, b);
		break;
	}
	case 3:
	{
		cout << "Enter the 1st Number: ";
		cin >> a;
		cout << "Enter the 2nd Number: ";
		cin >> b;
		cout << "Multiplication: " << mul(a, b);
		break;
	}
	case 4:
	{
		cout << "Enter the 1st Number: ";
		cin >> a;
		cout << "Enter the 2nd Number: ";
		cin >> b;
		if (b == 0)
		{
			while (b == 0)
			{
				cout << "You entered the denominator 0 so change it: ";
				cin >> b;
			}
		}
		cout << "Division: " << division(a, b);
		break;
	}
	}
	return 0;
}