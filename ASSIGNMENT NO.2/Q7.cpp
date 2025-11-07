#include<iostream>
using namespace std;
int main() {
	int x,y,z,a = 0, b = 1,sum=0;
	cout << "How many Fibonacci Numbers, you want to know: ";
	cin >> x;
	if (x <= 0)
	{
		cout << "Invalid Input"<<endl<<endl;
	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			if (i == 1)
			{
				cout << "Which Fibonacci: ";
				cin >> y;
			}
			else if (i == x)
			{
				cout << "Which last Fibonacci you want to ask: ";
				cin >> y;
			}
			else
			{
				cout << "Which Next Fibonacci: ";
				cin >> y;
			}
			if (y < 0)
			{
				cout << "Invalid Input" << endl << endl;
				continue;
			}
			a = 0, b = 0, sum = 0;
			for (int j = 0; j <= y; j++)
			{
				if (j == 1 || j == 2)
				{
					a = 0; b = 1;
				}
				sum = a + b;
				a = b;
				b = sum;
			}
			cout << "F" << y << ": " << sum << endl << endl;
		}
	}
	cout << "Enter the number upto which you want to print the Fibonacci Series: ";
	cin >> z;
	if (z < 0)
	{
		cout << "Invalid Input";
		return 0;
	}
	cout << "Fibonacci Series: ";
	a = 0, b = 0, sum = 0;
	int counter = 0;
	while(sum<=z)
	{	
	    if (counter == 1 || counter == 2)
		{
			a = 0; b = 1;
		}
		sum = a + b;
		a = b;
		b = sum;
		if (sum <= z)
		{
			cout << sum << " ,";
		}
		counter++;
	}
	cout << "\b";
}