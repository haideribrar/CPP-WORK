#include<iostream>
using namespace std;
int main() {
	int a,b;
	cout << "Enter any Number: ";
	cin >> a;
	do{
		int temp = a, product = 1;
		while (temp > 0)
		{
			b = temp % 10;
			temp=temp/ 10;
			product = product * b;
		}
		cout << product<<endl;
		a = product;
	} while (a>9);
}