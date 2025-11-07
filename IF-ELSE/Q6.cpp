#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter the two numbers to be compared." << endl;
	cin >> a;
	cin >> b;
	if (a < b)
	{
		cout << "Minimum Number: " << a;
	}
	else if (b < a)
	{
		cout << "Minimum Number: " << b;
	}
	else
	{
		cout << "Invalid Input";
	}
	return 0;
}