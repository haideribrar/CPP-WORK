#include<iostream>
using namespace std;
int main() {
	int a,b;
	cout << "Enter any Number: ";
	cin >> a;
	int counter1 = 0,counter=0;
	int temp = a;
	int sum=0, mul;
	while (temp > 0)
	{
		temp = temp / 10;
		counter++;
	}
	temp = a;
	while (temp > 0)
	{
		mul = 1;
		b = temp % 10;
		temp = temp / 10;
		counter1 = counter;
		while (counter1 >= 1)
		{
			mul = mul * b;
			counter1--;
		}
		sum = sum + mul;
	}
	if (sum == a)
	{
		cout << "Number is Armstrong";
	}
	if (sum != a)
	{
		cout << "Number is Not Armstrong";
	}
	return 0;
}