#include <iostream>
using namespace std;
int main()
{

    int n, t;
    int i, j, spaces, stars, middle, level, width;

    cout << "Enter length (n): ";
    cin >> n;
    cout << "Enter border thickness (t): ";
    cin >> t;
    middle = (n / 2) + 1;
    for (i = 1; i <= n; i++) {

        if (i <= middle)
        {
            level = i;
        }
        else
        {
            level = n - i + 1;
        }
        spaces = middle - level;
        width = 2 * level - 1 + 2 * (t - 1);
        for (j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= width; j++)
        {
            if (j <= t || j > width - t)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}