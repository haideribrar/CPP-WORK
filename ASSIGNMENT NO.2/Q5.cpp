#include<iostream>
using namespace std;

int main() {
    int a;
    bool flag = true;
    while (flag==true) {
        cout << "Enter a number to know if it is a Perfect Square or Not (Enter -1 to Exit): ";
        cin >> a;

        if (a == -1)
        {
            flag = false;
            continue;
        }
        if (a < 0)
        {
            cout << "Negative numbers cannot be perfect squares." << endl;
            continue;
        }

        int i = 0;
        while (i * i < a)
        {
            i++;
        }

        if (i * i == a)
            cout << a << " is a Perfect Square." << endl;
        else
            cout << a << " is NOT a Perfect Square." << endl;
    }

    return 0;
}
