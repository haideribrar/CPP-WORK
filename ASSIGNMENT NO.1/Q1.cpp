#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << " _____________________________________________________________________" << endl;
	cout << "|" << setw(6) << "Code" << setw(5) << "|" << setw(10) << "Meal" << setw(7) << "|" << setw(42) << "Per Kg Price In Pakistanti Rupees     |" << endl;
	cout << "|          |                |                                         |" << endl;
	cout << "|__________|________________|_________________________________________|" << endl;
	cout << "|    1     | Chicken Handi  |                  1800                   |" << endl;
	cout << "|__________|________________|_________________________________________|" << endl;
	cout << "|    2     | Chicken Karahi |                  2000                   |" << endl;
	cout << "|__________|________________|_________________________________________|" << endl;
	cout << "|    3     | Chicken Tikka  |                  2200                   |" << endl;
	cout << "|__________|________________|_________________________________________|" << endl;
	cout << "|    4     | Chicken Haleem |                  500                    |" << endl;
	cout << "|__________|________________|_________________________________________|" << endl;
	cout << "|    5     | Creamy Chicken |                  2500                   |" << endl;
	cout << "|__________|________________|_________________________________________|" << endl << endl;
	char code, currency;
	float quantity, mealprice, salestax;
	cout << "______________________________________________" << endl;
	cout << "Enter the code of the dish you want to order:";
	cin >> code;
	if (code < '1' || code>'5')
	{
		cout << "Invalid Input" << endl;
		return 0;
	}
	cout << "______________________________________________" << endl;
	cout << "Enter the Quantity in Kgs:";
	cin >> quantity;
	if (quantity <= 0)
	{
		cout << "Invalid Input" << endl;
		return 0;
	}
	cout << "______________________________________________" << endl;
	cout << "Enter the currency in which you want to pay: '1' for PKR, '2' for Euros, '3' for Dollars. ";
	cin >> currency;
	if (currency < '1' || currency > '3')
	{
		cout << "Invalid Input" << endl;
		return 0;
	}
	if (code == '1')
	{
		mealprice = quantity * 1800;
	}
	if (code == '2')
	{
		mealprice = quantity * 2000;
	}
	if (code == '3')
	{
		mealprice = quantity * 2200;
	}
	if (code == '4')
	{
		mealprice = quantity * 500;
	}
	if (code == '5')
	{
		mealprice = quantity * 2500;
	}
	if (mealprice <= 1000)
	{
		salestax = 0;
	}
	if (mealprice > 1000 && mealprice <= 3000)
	{
		salestax = mealprice * .02;
	}
	if (mealprice > 3000)
	{
		salestax = mealprice * .05;
	}
	cout << "______________________________________________" << endl;
	if (currency == '1')
	{
		cout << "Meal Price= " << fixed << setprecision(2) << mealprice << " Rupees" << endl;
		cout << "Sales Tax= " << fixed << setprecision(2) << salestax << " Rupees" << endl;
		cout << "Total Price= " << fixed << setprecision(2) << mealprice + salestax << " Rupees" << endl;
		cout << "______________________________________________" << endl;
	}
	if (currency == '2')
	{
		cout << "Meal Price= " << fixed << setprecision(2) << mealprice / 193 << " Euros" << endl;
		cout << "Sales Tax= " << fixed << setprecision(2) << salestax / 193 << " Euros" << endl;
		cout << "Total Price= " << fixed << setprecision(2) << ((mealprice + salestax) / 193) << " Euros" << endl;
		cout << "______________________________________________" << endl;
	}
	if (currency == '3')
	{
		cout << "Meal Price= " << fixed << setprecision(2) << mealprice / 165 << " Dollars" << endl;
		cout << "Sales Tax= " << fixed << setprecision(2) << salestax / 165 << " Dollars" << endl;
		cout << "Total Price= " << fixed << setprecision(2) << ((mealprice + salestax) / 165) << " Dollars" << endl;
		cout << "______________________________________________" << endl;
	}
	return 0;
}