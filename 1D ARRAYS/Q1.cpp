#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of integers you want: ";
	cin >> n;
	cout << "Enter Integers: " << endl;
	int arr[100];
	int counter1 = 0, counter2 = 0, counter3 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > 0)
		{
			counter1++;
		}
		if (arr[i] == 0)
		{
			counter2++;
		}
		if (arr[i] < 0)
		{
			counter3++;
		}
	}
	cout << "Positive Numbers: " << counter1 << endl;
	cout << "Zeros: " << counter2 << endl;
	cout << "Negetive Numbers: " << counter3 << endl;
	return 0;
}