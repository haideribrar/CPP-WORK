#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n, evensum = 0, oddsum = 0;
	cout << "Enter the number of integers you want to input: ";
	cin >> n;
	cout << "Enter Integers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i = i + 2)
	{
		evensum = evensum + arr[i];
	}
	for (int i = 1; i < n; i = i + 2)
	{
		oddsum = oddsum + arr[i];
	}
	cout << "Sum of Even Indices: " << evensum << endl;
	cout << "Sum of Odd Indices: " << oddsum;
	return 0;
}