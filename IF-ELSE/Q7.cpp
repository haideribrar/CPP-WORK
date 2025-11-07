#include<iostream>
using namespace std;
int main() {
	float gpa, attendence;
	string act;
	cout << "Enter your GPA" << endl;
	cin >> gpa;
	cout << "Enter your Attendence Percentage" << endl;
	cin >> attendence;
	cout << "Have you participated in any extra cirricular activity.Write Yes or No." << endl;
	cin >> act;
	if (gpa >= 3.0 && (attendence >= 75.0 || act == "yes"))
	{
		cout << "You are eligible for scholarship";
	}
	else
	{
		cout << "You are ineligible for scholarship.";
	}
}