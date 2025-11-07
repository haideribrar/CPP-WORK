#include<iostream>
using namespace std;
int main() {
	int a, b,c,d,lcm1=0,lcm2=0;
	cout << "Enter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	for (int i = a; i >= 1; i--)
	{
		c = b * i;
		for (int j = b; j >= 1; j--)
		{
			d = a * j;
			if (c==d)
			{
				lcm1=d ;
				lcm2 = lcm1;
			}
			if (lcm1 < lcm2)
			{
				lcm2 = lcm1;
			}
		}
	}
	cout<<"LCM: " << lcm2;
}