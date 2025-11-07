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
	return 0;
}