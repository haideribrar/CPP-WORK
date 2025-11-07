#include<iostream>
using namespace std;
int main()
{
	int N, arr[100], value;
	cout << "Enter the Number of integers you want to input: ";
	cin >> N;
	cout << "Enter Integers: " << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the number you want to know: ";
	cin >> value;
	int temp;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	bool flag = false;
	int result;
	int low = 0;
	int high = N - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] == value)
		{
			result = mid;
			flag = true;
			break;
		}
		else if (arr[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << "Sorted Array: [";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i];
		if (i < N - 1)
		{
			cout << ",";
		}
	}
	cout << "]" << endl;
	if (flag == false)
	{
		cout << "Number Not Found!";
	}
	if (flag == true)
	{
		cout << "Number found at Index " << result << " of sorted array.";
	}
	return 0;
}