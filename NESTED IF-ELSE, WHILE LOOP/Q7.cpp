#include<iostream>
using namespace std;
int main() {
	int a, b, rev = 0;
	cout << "Enter any number:";
	cin >> a;
	while (a > 0)
	{
		b = a % 10;
		a = a / 10;
		rev = (rev * 10) + b;
	}
	cout << "Reverse Number:" << rev << endl;
}