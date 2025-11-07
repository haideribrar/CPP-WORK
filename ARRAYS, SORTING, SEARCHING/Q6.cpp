#include<iostream>
using namespace std;
int main()
{
	int n, arr[100], temp;
	cout << "Enter the number of integers you want to input: ";
	cin >> n;
	cout << "Enter Integers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int arr1[100];
	for (int i = 0; i < n; i++)
	{
		arr1[i] = arr[i];
	}
	int digit = 0;
	while (digit <= 9)
	{
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == digit)
			{
				count++;
			}
		}
		if (count > 0)
		{
			cout << digit << " occurs " << count << " times" << endl;
		}
		digit++;
	}
	int size = n - 1;
	for (int i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size];
		arr[size] = temp;
		size--;
	}
	cout << "Reverse Array: [";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
		if (i < n - 1)
		{
			cout << ",";
		}
	}
	cout << "]" << endl;
	int temp1;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr1[i] < arr1[j])
			{
				temp1 = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp1;
			}
		}
	}
	cout << "Sorted Array: [";
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i];
		if (i < n - 1)
		{
			cout << ",";
		}
	}
	cout << "]";
	return 0;
}