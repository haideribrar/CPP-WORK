#include<iomanip>
#include<iostream>
using namespace std;
int main() {
	float omatric, ointer, oentrytest, tmatric, tinter, tentrytest;
	float aggregate;
	cout << "Enter your obtained marks in Matric" << endl;
	cin >> omatric;
	cout << "Enter your total marks in Matric" << endl;
	cin >> tmatric;
	cout << "Enter your obtained marks in Inter" << endl;
	cin >> ointer;
	cout << "Enter your total marks in Inter" << endl;
	cin >> tinter;
	cout << "Enter your obtained marks in Entry test" << endl;
	cin >> oentrytest;
	cout << "Enter your obtained marks Entry Test" << endl;
	cin >> tentrytest;

	aggregate = ((omatric / tmatric) * 10) + ((ointer / tinter) * 40) + ((oentrytest / tentrytest) * 50);
	cout << "AGGREGATE:" << setprecision(4) << aggregate;

}