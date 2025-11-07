#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num, row, col, size, d_row, d_col, dis, result;

    cout << "Enter size: ";
    cin >> num;

    size = 2 * num - 1;

    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= size; col++)
        {
            d_row = row - num;
            if (d_row < 0)
            {
                d_row = -d_row;
            }

            d_col = col - num;
            if (d_col < 0)
            {
                d_col = -d_col;
            }

            if (d_row > d_col)
            {
                dis = d_row;
            }
            else
            {
                dis = d_col;
            }

            result = dis + 1;

            cout << setw(2) << result << " ";
        }
        cout << endl;
    }

    return 0;
}