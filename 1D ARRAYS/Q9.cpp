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
	int low = 0;
	int high = N - 1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] == value)
		{
			cout << "Number found at Index: " << mid;
			return 0;
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
	cout << "Number Not Found!";
	return 0;

}