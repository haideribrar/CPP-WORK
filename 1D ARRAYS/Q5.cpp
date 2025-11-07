#include<iostream>
using namespace std;
int main()
{
	int n, arr[100];
	cout << "Enter the number of integers you want to input: ";
	cin >> n;
	cout << "Enter Integers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = i;
		}
	}
	arr[max] = -10000;
	int second = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > second)
		{
			second = arr[i];
		}
	}
	cout << "Second Largest Number: " << second;
	return 0;
}