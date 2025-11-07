#include<iostream>
using namespace std;
int main() {
	int age, marks;
	cout << "Enter your age:";
	cin >> age;
	cout << "Enter your marks:";
	cin >> marks;
	if (age < 0 || marks < 0 || marks>100)
		cout << "Invalid Input" << endl;
	else if (age >= 18)
	{
		if (marks >= 60)
		{
			cout << "You are eligible for driving license" << endl;
		}
		else
		{
			cout << "You are not eligible for driving license" << endl;
		}
	}
	else
	{
		cout << "You are not eligible for driving license" << endl;
	}
	return 0;
}