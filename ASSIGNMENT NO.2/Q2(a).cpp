#include<iostream>
using namespace std;
int main() {
	int a,counter=0;
	cout << "Enter a Number: ";
	cin >> a;
	if (a < 0)
	{
		a = -a;
	}
	while (a >= 10)
	{
		int product = 1;
		int temp = a;
		while (temp > 0)
		{
			product =product * (temp % 10);
			temp /= 10;
		}
		a = product;   
		counter++;    
	}

	cout << "Persistence: " << counter;
	return 0;
}