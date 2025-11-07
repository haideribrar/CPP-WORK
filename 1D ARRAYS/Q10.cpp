#include<iostream>
using namespace std;
int main()
{
	int n1, temp;
	int arr1[100], arr2[100], arr[200];
	cout << "Enter the Number of integers you want to input: ";
	cin >> n1;
	cout << "Enter Integers for Array 1: " << endl;
	for (int i = 0; i < n1; i++)
	{
		cin >> arr1[i];
	}
	cout << "Enter Integers for Array 2: " << endl;
	for (int i = 0; i < n1; i++)
	{
		cin >> arr2[i];
	}
	for (int i = 0; i < 2 * n1; i++)
	{
		if (i < n1)
		{
			arr[i] = arr1[i];
		}
		else
		{
			arr[i] = arr2[i - n1];
		}
	}
	for (int i = 0; i < (2 * n1) - 1; i++)
	{
		for (int j = i + 1; j < 2 * n1; j++)
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
	for (int i = 0; i < 2 * n1; i++)
	{
		cout << arr[i];
		if (i < 10 - 1)
		{
			cout << ",";
		}
	}
	cout << "]";

}