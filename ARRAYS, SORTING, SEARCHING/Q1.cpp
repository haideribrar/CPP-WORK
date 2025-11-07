#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	float n;
	cout << "Enter the number of integers you want to input in your arrays: ";
	cin >> n;
	cout << "Enter Integers into arrays: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Array: [";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
		if (i < n - 1)
		{
			cout << ",";
		}
	}
	cout << "]" << endl;
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Sum: " << sum << endl;

	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr[max])
		{
			max = arr[i];
		}
	}
	cout << "Max: " << max << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr[min])
		{
			min = arr[i];
		}
	}
	cout << "Min: " << min << endl;
	float average = (sum / n);
	cout << "Average: " << average << endl;
}