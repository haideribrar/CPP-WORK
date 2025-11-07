#include<iostream>
using namespace std;
int main()
{
int p1x, p2x, p3x, p1y, p2y, p3y,ab,bc,ac,area;
cout << "enter the x and y co-ordinates of points p1,p2,p3.:"<<endl;
cout << "p1(x y):";
cin >> p1x >> p1y;
cout << "p2(x y):";
cin >> p2x >> p2y;
cout << "p3(x y):";
cin >> p3x >> p3y;
ab = ((p2x - p1x) * (p2x - p1x) + (p2y - p1y) * (p2y - p1y));
bc = ((p3x - p2x) * (p3x - p2x) + (p3y - p2y) * (p3y - p2y));
ac = ((p3x - p1x) * (p3x - p1x) + (p3y - p1y) * (p3y - p1y));
area = p1x * (p2y - p3y) + p2x * (p3y - p1y) + p3x * (p1y - p2y);
if (area == 0)
{
	cout << "not a triangle (points are collinear)." << endl;
} 
else
{
	if (ab == bc && bc == ac)
	{
		cout << "output: equilateral triangle." << endl;
	}
	if (ab != bc && bc != ac && ab != ac)
	{
		cout << "output: scalene triangle." << endl;
	}
	if ((ab == bc && bc != ac) || (ac == bc && bc != ab) || (ab == ac && ac != bc))
	{
		cout << "output: isosceles triangle." << endl;
	}
	if (ab == bc + ac || bc == ab + ac || ac == ab + bc)
	{
		cout << "output: right angle triangle." << endl;
	}
}
return 0;
}