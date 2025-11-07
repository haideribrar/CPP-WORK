#include <iostream>
using namespace std;

int main() {
    int num = -1, binnum = 0, reverse = 0, digitcount = 0;

    while (num < 0) {
        cout << "enter a non-negative number: ";
        cin >> num;
    }

    while (num > 0) {
        binnum = (binnum * 10) + (num % 2);
        num /= 2;
        digitcount++;
    }

    while (digitcount > 0) {
        reverse = (reverse * 10) + (binnum % 10);
        binnum /= 10;
        digitcount--;
    }

    cout << "binary number: " << reverse << endl;

    return 0;
}