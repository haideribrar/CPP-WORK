#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Enter a number:";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "The number is even." << endl;
		if (a % 4 == 0)
		{
			cout << "It is divisible by 4." << endl;
		}
		else
		{
			cout << "It is not divisible by 4." << endl;
		}
	}
	else
	{
		cout << "The number is odd." << endl;
		if (a % 3 == 0)
		{
			cout << "It is divisible by 3." << endl;
		}
		else
		{
			cout << "It is not divisible by 3." << endl;
		}
	}
	return 0;
}