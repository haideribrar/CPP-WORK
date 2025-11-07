#include<iostream>
using namespace std;
int main() {
	int balance, withdraw;
	cout << "Enter Account Balance:";
	cin >> balance;
	cout << "Enter Withdrawal Account:";
	cin >> withdraw;
	if (balance < 0 || withdraw <= 0)
	{
		cout << "Invalid Input" << endl;
	}
	else if (balance >= 0 || withdraw > 0)
	{
		if (balance > withdraw)
		{
			cout << "Remaining Balance:" << balance - withdraw << endl;
		}
		else
		{
			cout << "Insufficient Balance" << endl;
		}
	}
	return 0;
}