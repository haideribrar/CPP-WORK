#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Enter any number:";
	cin >> a;
	if (a < 0)
	{
		cout << "Negative" << endl;
	}
	else if (a == 0)
	{
		cout << "Zero" << endl;
	}
	else if (a > 0 && a < 100)
	{
		cout << "Positive and Small" << endl;
	}
	else if (a >= 100)
	{
		cout << "Positive and Large" << endl;
	}
	return 0;
}