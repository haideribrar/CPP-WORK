#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter two numbers.";
	cin >> a;
	cin >> b;
	cout << "Addition=" << a + b << endl;
	cout << "Subtration=" << a - b << endl;
	cout << "Multiplication=" << a * b << endl;
	cout << "Division=" << a / b << endl;
	cout << "Modulus=" << a % b << endl;
	return 0;
}