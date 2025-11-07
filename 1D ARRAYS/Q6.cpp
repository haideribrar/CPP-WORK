#include<iostream>
using namespace std;
int main()
{
	int arr[10], temp;
	cout << "Enter 10 Integers: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
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
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i];
		if (i < 10 - 1)
		{
			cout << ",";
		}
	}
	cout << "]";
	return 0;
}