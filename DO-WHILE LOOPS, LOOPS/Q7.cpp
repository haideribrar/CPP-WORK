#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Enter the size of the Pyramid: ";
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j =i; j<=a-1; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= 2*i-1; k++)
		{
			if (k ==1||k==2*i-1||i==a )
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}