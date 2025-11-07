#include<iostream>
using namespace std;
int main() {
	int marks;
	cout << "Enter your marks" << endl;
	cin >> marks;
	if (marks >= 90 && marks <= 100)
	{
		cout << "A";
	}
	else if (marks >= 80 && marks <= 89)
	{
		cout << "B";
	}
	else if (marks >= 70 && marks <= 79)
	{
		cout << "C";
	}
	else if (marks >= 60 && marks <= 69)
	{
		cout << "D";
	}
	else if (marks < 60)
	{
		cout << "Fail";
	}
	else {
		cout << "Invalid input";
	}
}