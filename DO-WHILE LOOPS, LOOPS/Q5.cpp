//#include<iostream> 
//using namespace std;
//int main() {
//	int a,b;
//	do {
//		cout << "1. Factorial \n2. Check Prime \n3. Reverse Number \n4. Exit"<<endl<<"Enter: ";
//		cin >> a;
//		if (a < 1 || a > 4)
//		{
//			cout << "Invalid Input"<<endl<<endl;
//			continue;
//		}
//		switch (a)
//		{
//		case 1:
//		{
//			cout << "Enter any Positive Number: ";
//			cin >> b;
//			int product=1;
//			if (b < 0)
//			{
//				cout << "Invalid Input"<<endl<<endl;
//				continue;
//			}
//			for (int i = b; i >= 1; i--)
//			{
//				product = product * i;
//			}
//			cout << "Factorial: " << product << endl<<endl;
//			break;
//		}
//		case 2:
//		{
//			cout << "Enter any Positive Number: ";
//			cin >> b;
//			bool prime = true;
//			if (b < 1)
//			{
//				cout << "Invalid Input"<<endl<<endl;
//				continue;
//			}
//			for (int i = 2; i < b; i++)
//			{
//				if (b % i == 0)
//				{
//					prime = false;
//				}
//			}
//			if (prime == true)
//			{
//				cout << "It is a Prime Number" << endl << endl;
//			}
//			if (prime == false)
//			{
//				cout << "It is Not a Prime Number" << endl << endl;
//			}
//			break;
//		}
//		case 3:
//		{
//			cout << "Enter any Positive Integer: ";
//			cin >> b;
//			int reverse=0,c;
//			if (b < 1)
//			{
//				cout << "Invalid Input"<<endl<<endl;
//				continue;
//			}
//			while (b > 0)
//			{
//				c = b % 10;
//				b = b / 10;
//				reverse = (reverse*10) + c ;
//			}
//			cout << "Reverse: " << reverse << endl << endl;
//			break;
//		}
//		}
//	} while (a != 4);
//}