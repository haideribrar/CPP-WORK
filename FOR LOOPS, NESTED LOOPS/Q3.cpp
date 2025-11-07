#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a;
	cout << "Enter the size of the Pascal's Triangle: ";
	cin >> a;
	int b = a;
	if (a <= 1)
	{
		cout << "Invalid Input";
		return 0;
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			cout << setw(3) << " ";
		}
		b--;
		int num = 1;
		for (int k = 0; k <= i; k++)
		{
			cout << setw(6) << num;
			num = num * (i - k) / (k + 1);
		}
		cout << endl;
	}
	return 0;
}