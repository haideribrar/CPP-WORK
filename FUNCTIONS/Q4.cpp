#include<iostream>
using namespace std;
float area(int r)
{
	float area = (3.14) * r * r;
	return area;
}
float area(int l, int w)
{
	float area = l * w;
	return area;
}
float area(double b, double h)
{
	float area = (0.5) * b * h;
	return area;
}
int main()
{
	int a;
	cout << "Enter a Number for the shape whose are you want to know: \n 1. Circle \n 2. Rectangle \n 3. Triangle " << endl;
	cin >> a;
	if (a < 1 || a > 3)
	{
		cout << "Invalid Input";
		return 0;
	}
	if (a == 1)
	{
		int r;
		cout << "Enter the Radius of the Circle: ";
		cin >> r;
		cout << "Area: " << area(r);
	}
	else if(a==2)
	{
		int l,w;
		cout << "Enter the Lenght of the Rectangle: ";
		cin >> l;
		cout << "Enter the Width of the Rectangle: ";
		cin >> w;
		cout << "Area: " << area(l,w);
	}
	else if (a == 3)
	{
		double b, h;
		cout << "Enter the Base of the Triangle: ";
		cin >> b;
		cout << "Enter the Height of the Triangle: ";
		cin >> h;
		cout << "Area: " << area(b, h);
	}
	return 0;
}