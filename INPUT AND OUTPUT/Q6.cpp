#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a;
	cout << "Enter any number" << endl;
	cin >> a;
	cout << setw(5) << a << "x1=" << setw(7) << a * 1 << endl;
	cout << setw(5) << a << "x2=" << setw(7) << a * 2 << endl;
	cout << setw(5) << a << "x3=" << setw(7) << a * 3 << endl;
	cout << setw(5) << a << "x4=" << setw(7) << a * 4 << endl;
	cout << setw(5) << a << "x5=" << setw(7) << a * 5 << endl;
	cout << setw(5) << a << "x6=" << setw(7) << a * 6 << endl;
	cout << setw(5) << a << "x7=" << setw(7) << a * 7 << endl;
	cout << setw(5) << a << "x8=" << setw(7) << a * 8 << endl;
	cout << setw(5) << a << "x9=" << setw(7) << a * 9 << endl;
	cout << setw(5) << a << "x10=" << setw(7) << a * 10 << endl;
	return 0;
}