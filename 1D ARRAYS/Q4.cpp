#include<iostream>
using namespace std;
int main()
{
	int n, temp;
	int arr[100];
	cout << "Enter the Number of integers you want to input: ";
	cin >> n;
	cout << "Enter Integers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int size = n - 1;
	for (int i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size];
		arr[size] = temp;
		size--;
	}
	cout << "New Array: [";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
		if (i < n - 1)
		{
			cout << ",";
		}
	}
	cout << "]";
	return 0;
}