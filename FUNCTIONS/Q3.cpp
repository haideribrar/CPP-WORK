#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b;
	cout << "Enter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	swap(a,b);
	cout << "After Swapping:" << endl;
	cout << "1st Number becomes: " << a  <<endl;
	cout << "2nd Number becomes: " << b;
	return 0;
}