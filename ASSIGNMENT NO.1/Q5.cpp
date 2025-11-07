#include<iostream>
using namespace std;
int main() {
	int d1, d2, d3;
	int m1, m2, m3;
	int y1, y2, y3;
	cout << "Enter Birth Date (dd mm yyyy):";
	cin >> d1 >> m1 >> y1;
	cout << "Enter Current Date (dd mm yyyy):";
	cin >> d2 >> m2 >> y2;
	if (d1 > 31|| d1 < 1 || d2  > 31 || d2 < 1 || m1 > 12 || m1 < 1 || m2 > 12 || m2 < 1 || y1 > y2 || y1<1 || y2<1 )
	{
		cout << "Invalid Input." << endl;
	}
	else if (m1 == 2 && d1 == 30)
	{
		cout << "Invalid Input" << endl;
	}
	else
	{
		y3 = y2 - y1;
		m3 = m2 - m1;
		d3 = d2 - d1;
		if (d1 > d2 && m1 > m2)
		{
			d3 = d3 + 31;
			m3 = m3 + 11;
			y3=y3-1;
		}
		if (d1 < d2 && m1 > m2)
		{
			m3 = m3 + 12;
			y3 = y3 - 1;
		}
		if (d1 > d2 && m1 < m2)
		{
			d3 = d3 + 31;
			m3 = m3 - 1;
		}
		if (d1 == d2 && m1 > m2)
		{
			m3 = m3 + 12;
			y3 = y3 + 1;
		}	
		if (d1 > d2 && m1 == m2)
		{
			y3 = y3 - 1;
			m3 = m3 + 11;
			d3 = d3 + 31;
		}
		cout << "Your age is " << y3 << " year, " << m3 << " month, and  " << d3 << " day" << endl;
	}
 return 0;
}
