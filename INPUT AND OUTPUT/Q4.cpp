#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, b, c;
	cout << "Enter any threee integers." << endl;
	cin >> a >> b >> c;
	float average = (a + b + c) / 3;
	cout << "Sum:" << a + b + c << endl;
	cout << "Average:" << average << endl;
	cout << "Product:" << a * b * c << endl;
	return 0;

}