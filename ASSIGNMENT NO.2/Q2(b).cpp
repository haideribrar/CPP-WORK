#include <iostream>
using namespace std;

int main() {
    int a, b, num, counter2 = 0;
    cout << "Enter the Minimum Range: ";
    cin >> a;
    cout << "Enter the Maximum Range: ";
    cin >> b;
    cout << "Range:(" << a << "," << b << ")" << endl;

    for (int i = a; i <= b; i++) {
        int counter1 = 0;
        num = i;

        if (num < 0)
            num = -num;

        if (num == 0)
            counter1 = 0;
        else {
            while (num >= 10) {
                int product = 1;
                int temp = num;
                while (temp > 0) {
                    product *= (temp % 10);
                    temp /= 10;
                }
                num = product;
                counter1++;
            }
        }

        if (counter1 >= 2)
            counter2++;
    }

    cout << "In Range:(" << a << "," << b << ") " << counter2
        << " numbers have persistence >= 2." << endl;

    return 0;
}
