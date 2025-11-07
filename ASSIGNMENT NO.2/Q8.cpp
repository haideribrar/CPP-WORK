#include<iostream>
using namespace std;
int main() {
	int a,counter=0;
	cout << "Enter any Positive Integer: ";
	cin >> a;
	if (a <= 0)
	{
		cout << "Invalid Input";
		return 0;
	}
	cout << "Sequence: ";
	int i = a;
	while (i > 1)
	{
		cout <<i<< " , ";
		if (i % 2 == 0)
		{
			i = i / 2;
			counter++;
		}
		else
		{
			i = (i * 3) + 1;
			counter++;
		}
	}
	cout << "1 | Steps: " << counter;
	return 0;
}