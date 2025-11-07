#include<iostream>
using namespace std;
int main()
{
	int arr[100], temp, n;
	cout << "Enter the number of integers you want to input in your arrays: ";
	cin >> n;
	cout << "Enter Integers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Sorted Array: [";
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