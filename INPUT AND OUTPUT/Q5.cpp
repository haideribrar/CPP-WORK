#include<iostream>
using namespace std;
int main() {
	float celsius, fahrenheit;
	cout << "Enter the temperature in Celsius." << endl;
	cin >> celsius;
	fahrenheit = 1.8 * celsius;
	fahrenheit = fahrenheit + 32;
	cout << "Temperature in Fahrenheit : " << fahrenheit;
	return 0;
}