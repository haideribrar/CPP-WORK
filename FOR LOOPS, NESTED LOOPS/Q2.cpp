#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter size of pyramid: ";
	cin >> a;
	if (a <= 0)
	{
		cout << "Invalid Input";
		return 0;
	}
	b = a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b - 1; j++)
		{
			cout << " ";
		}
		b--;
		for (int k = 1; k <= i; k++)
		{
			cout << k;
		}
		for (int c = i - 1; c >= 1; c--)
		{
			cout << c;
		}
		cout << endl;
	}
	return 0;
}