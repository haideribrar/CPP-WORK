#include<iostream>
using namespace std;
void sumanddif(int a, int b, int& sum, int& dif)
{
	sum = a + b;
	dif = a - b;
}
int main()
{
	int a, b, sum = 0, dif = 0;
	cout << "Enter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	sumanddif(a, b, sum, dif);
	cout << "Sum: " << sum << endl;
	cout << "Difference: " << dif;
	return 0;
}