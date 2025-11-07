#include<iostream>
using namespace std;
int main() {
	int a, mul = 1;
	cout << "Enter any positive interger whose factorial you want:";
	cin >> a;
	if (a < 0)
	{
		cout << "Invalid Input" << endl;
	}
	else
	{
		while (a > 0)
		{
			mul = mul * a;
			a--;
		}
		cout << "Factorial:" << mul << endl;
	}
}