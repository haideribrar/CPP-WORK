#include<iostream>
using namespace std;
int square(int n)
{
	int square;
	square = n * n;
	return square;
}
int main()
{
	int n;
	cout << "enter any number: ";
	cin >> n;
	cout << "square: " << square(n);
	return 0;
}