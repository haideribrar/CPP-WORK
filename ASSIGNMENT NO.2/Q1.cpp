#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(0));
	int min = 1;
	int max = 100;
	int a = rand() % (max - min + 1) + min;
	cout <<"NUMBER GUESSING GAME:" <<endl<< endl;
	a = 25;
	cout << "Computer Think: " << a << endl;
	int b,i;
	for (i = 1; i <= 10; i++)
	{
		cout << "User Guessed Number: ";
		cin >> b;
		if (b < 1 || b > 100)
		{
			cout << "Invalid Input"<<endl;
			continue;
		}
		if (b > a && (b - a < 10))
		{
			cout << "  =>High. Attempts Left: "<<10-i;
		}
		if (b > a && (b - a >= 10))
		{
			cout << "  =>Too High. Attempts Left: " << 10 - i;
		}
		if (a > b && (a - b < 10))
		{
			cout << "  =>Low. Attempts Left: " << 10 - i;
		}
		if (a > b && (a - b >= 10))
		{
			cout << "  =>Too Low. Attempts Left: " << 10 - i;
		}
		if (b==a)
		{
			cout <<endl<< "Congratulations! You guessed it.";
			break;
		}
		if (i == 3)
		{
			if (a % 2 == 0)
			{
				cout <<endl<<endl<< "Hint: Even Number"<<endl;
			}
			else
			{
				cout <<endl<<endl<< "Hint: Odd Number"<<endl;
			}
		}
		if (i == 6)
		{
			bool prime = true;
			for (int j = 2; j < a; j++)
			{
				if (a % j == 0)
				{
					prime = false;
					break;
				}
			}
			if(prime==true)
			{
				cout << endl << endl << "Hint: Prime Number" << endl;
			}
			else
				cout << endl << endl << "Hint: Not a Prime Number" << endl;
		}
		if (i == 10 && b != a)
		{
			cout <<endl<< "Game Over! The Number was: " << a;
		}
		cout << endl;
	}
	cout <<endl<< "Score: " << (11 - i) * 10<<"/100";
	return 0;
}