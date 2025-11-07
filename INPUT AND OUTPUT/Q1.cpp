#include<iostream>
#include<string>
using namespace std;
int main() {
	int age;
	string name;
	float gpa;
	cout << "Enter Name:";
	getline(cin, name);
	cout << "Enter Age:";
	cin >> age;
	cout << "Enter GPA:";
	cin >> gpa;
	cout << "Name:" << name << ",Age:" << age << ",GPA:" << gpa;
	return 0;
}