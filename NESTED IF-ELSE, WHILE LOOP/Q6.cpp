#include<iostream>
using namespace std;
int main() {
	int a, sum = 0;
	cout << "Enter any positive interger value till which you want to sum:";
	cin >> a;
	if (a <= 0)
	{
		cout << "Invalid Input" << endl;
	}
	else
	{
		while (a > 0)
		{
			sum = sum + a;
			a--;
		}
		cout << "Sum:" << sum << endl;
	}
}