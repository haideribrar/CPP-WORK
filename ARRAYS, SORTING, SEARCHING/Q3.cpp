#include<iostream>
using namespace std;
int main()
{
	int arr[100], n, key;
	cout << "Enter the number of integers you want to input in your arrays: ";
	cin >> n;
	cout << "Enter Integers into arrays: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the number you want to find: ";
	cin >> key;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			cout << "Number found at index: " << i;
			return 0;
		}
	}
	cout << "Number Not Found!";
	return 0;
}