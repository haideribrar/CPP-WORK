#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char operation;
	cout << "Enter any two numbers:" << endl;
	cin >> a;
	cin >> b;
	cout << "Enter an operation:";
	cin >> operation;
	switch (operation) {
	case '+':
	{
		cout << "Output:" << endl;
		cout << "Result:" << a + b << endl;
		break;
	}
	case '-':
	{
		cout << "Output:" << endl;
		cout << "Result:" << a - b << endl;
		break;
	}
	case '*':
	{
		cout << "Output:" << endl;
		cout << "Result:" << a * b << endl;
		break;
	}
	case '/':
	{
		switch (b) {
		case 0:
		{
			cout << "Division by o is not allowed"<<endl;
			break;
		}
		default:
		{
			cout << "Output:" << endl;
			cout << "Result:" << a / b << endl;
			break;
		}
		}
		break;
	}
	case '%':
	{
		switch (b) {
		case 0:
		{
			cout << "Modulus by 0 is not allowed"<<endl;
			break;
		}
		default:
		{
			cout << "Output:" << endl;
			cout << "Result:" << a % b << endl;
			break;
		}
		}
		break;
	}
	case'<':
	{
		switch (a < b) {
		case 1:
		{
			cout << "Output:" << endl;
			cout << a << " is less than " << b << endl;
			break;
		}
		case 0:
		{
			cout << "Output:" << endl;
			cout << a << " is not less than " << b << endl;
			break;
		}
		}
		break;
	}
	case'>':
	{
		switch (a > b) {
		case 1:
		{
			cout << "Output:" << endl;
			cout << a << " is greater than " << b << endl;
			break;
		}
		case 0:
		{
			cout << "Output:" << endl;
			cout << a << " is not greater than " << b << endl;
			break;
		}
		}
		break;
	}
	case'=':
	{
		switch (a == b) {
		case 1:
		{
			cout << "Output:" << endl;
			cout << "Both the numbers are equal" << endl;
			break;
		}
		case 0:
		{
			cout << "Output:" << endl;
			cout << "Both the numbers are not equal" << endl;
			break;
		}
		}
		break;
	}
	case '&':
	{
		switch ((a % 2 == 0) && (b % 2 == 0)) {
		case 1:
		{
			cout << "Output:" << endl;
			cout << "Both the numbers are even" << endl;
			break;
		}
		case 0:
		{
			cout << "Output:" << endl;
			cout << "Both the numbers are not even" << endl;
			break;
		}
		}
		break;
	}
	case '|':
	{
		switch ((a % 2 != 0) || (b % 2 != 0)) {
		case 1:
		{
			cout << "Output:" << endl;
			cout << "Atleast one of the number is odd" << endl;
			break;
		}
		case 0:
		{
			cout << "Output:" << endl;
			cout << "None of the number is odd" << endl;
			break;
		}
		}
		break;
	}
	return 0;
}
}