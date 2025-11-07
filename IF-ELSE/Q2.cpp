#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Enter any number" << endl;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "You entered an even number";
	}
	else
		cout << "You entered an odd number";
}