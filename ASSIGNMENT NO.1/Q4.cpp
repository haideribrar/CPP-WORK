#include<iostream>
using namespace std;
int main() {
	int x, y;
	cout << "Enter x-coodinate:";
	cin >> x;
	cout << "Enter y-coodinate:";
	cin >> y;
	if (x == 0)
	{
		if (y == 0)
		{
			cout << "The point lies on the origin."<<endl;
		}
		if (y > 0)
		{
			cout << "The point lies on the positive Y-axis."<<endl;
		}
		if (y < 0)
		{
			cout << "The point lies on negative Y-axis."<<endl;
		}
	}
	if (y == 0)
	{
		if (x > 0)
		{
			cout << "The point lies on the positive X-axis."<<endl;
		}
		if (x < 0)
		{
			cout << "The point lies on the negative X-axis"<<endl;
		}
	}
	switch (y != 0)
	{
	case 1:
		switch (x != 0)
		{
		case 1:
			switch (y > 0)
			{
			case 1:
			{
				switch (x > 0)
				{
				case 1:
				{
					cout << "The point (" << x << "," << y << ") lies in Quandrant-I." << endl;
					break;
				}
				case 0:
				{
					cout << "The point (" << x << "," << y << ") lies in Quandrant-II." << endl;
					break;
				}
				}
				break;
			}
			case 0:
			{
				switch (x > 0)
				{
				case 1:
				{
					cout << "The point (" << x << "," << y << ") lies in Quandrant-IV." << endl;
					break;
				}
				case 0:
				{
					cout << "The point (" << x << "," << y << ") lies in Quandrant-III." << endl;
					break;
				}
				}
			}
			}
		}
	}
	return 0;
}