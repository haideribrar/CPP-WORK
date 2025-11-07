#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            int layer = r;
            if (c < layer) layer = c;
            if (n - 1 - r < layer) layer = n - 1 - r;
            if (n - 1 - c < layer) layer = n - 1 - c;

            int start = 1;
            for (int k = 0; k < layer; k++)
            {
                start = start + ((n - 2 * k) * 4 - 4);
            }

            int side = n - 2 * layer;
            int val;

            if (r == layer)
            {
                val = start + (c - layer);
            }
            else if (c == n - layer - 1)
            {
                val = start + (side - 1) + (r - layer);
            }
            else if (r == n - layer - 1)
            {
                val = start + 2 * (side - 1) + (n - layer - 1 - c);
            }
            else {
                val = start + 3 * (side - 1) + (n - layer - 1 - r);
            }

            cout << val << "\t";
        }
        cout << "\n";
    }

    return 0;
}