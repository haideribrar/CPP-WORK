#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() {
	string name1, name2, name3;
	int mark1, mark2, mark3;
	cout << "Enter name of Student 1:";
	getline(cin, name1);
	cout << "Enter name of Student 2:";
	getline(cin, name2);
	cout << "Enter name of Student 3:";
	getline(cin, name3);
	cout << "Enter marks of Student 1:";
	cin >> mark1;
	cout << "Enter marks of Student 2:";
	cin >> mark2;
	cout << "Enter marks of Student 3:";
	cin >> mark3;
	cout << setw(10) << "Name" << setw(10) << "Marks" << endl;
	cout << setw(10) << name1 << setw(10) << mark1 << endl;
	cout << setw(10) << name2 << setw(10) << mark2 << endl;
	cout << setw(10) << name3 << setw(10) << mark3;
	return 0;
}