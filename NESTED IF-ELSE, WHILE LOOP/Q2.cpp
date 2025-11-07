#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Enter any number:";
	cin >> a;
	if (a % 5 == 0 && a % 7 == 0)
	{
		cout << "Divisible by 5 and 7" << endl;
	}
	else if (a % 5 != 0 && a % 7 != 0)
	{
		cout << "Not Divisible by 5 and 7" << endl;
	}
	else if (a % 5 == 0)
	{
		cout << "Divisible by 5" << endl;
	}
	else if (a % 7 == 0)
	{
		cout << "Divisible by 7" << endl;
	}
	return 0;
}