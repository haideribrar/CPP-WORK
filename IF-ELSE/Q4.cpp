#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Enter FIRST NUMBER" << endl;
	cin >> a;
	cout << "Enter SECOND NUMBER" << endl;
	cin >> b;
	cout << "Enter  THIRD NUMBER" << endl;
	cin >> c;
	if (a > b)
	{
		if (a > c)
		{
			cout << "Largest Number:" << a;
		}
		else
		{
			cout << "Largest Number:" << c;
		}
	}
	else if (b > a)
	{
		if (b > c)
		{
			cout << "Largest Number:" << b;
		}
		else
		{
			cout << "Largest Number:" << c;
		}
	}
	else
	{
		cout << "largest Number:" << c;
	}
	return 0;
}