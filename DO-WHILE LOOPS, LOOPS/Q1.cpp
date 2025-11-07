//#include<iostream>
//using namespace std;
//int main() {
//	int a;
//	cout << "Enter any Positive Integer: ";
//	cin >> a;
//	if (a <= 0)
//	{
//		cout << "Invalid Input"<<endl;
//		return 0;
//	}
//	int b, i = 0;
//	int temp = a, counter = 0;
//	while (i<10)
//	{
//		while (temp > 0)
//		{
//			b = temp % 10;
//			temp = temp / 10;
//			if (b == i)
//			{
//				counter++;
//			}
//		}
//		cout << "Digit " << i << " => " << counter << " times" << endl;
//		counter = 0;
//		temp = a;
//		i++;
//	}
//}