#include <iostream>
using namespace std;

int main() {
    for (int a = 0; a <= 1000; a++)
    {
        for (int b = a; b <= 1000; b++)
        {  
            for (int c = b; c <= 1000; c++)
            {
                if (a * a + b * b + c * c == 1000)
                {
                    cout << a << " square + " << b << " square + " << c << " square = 1000" << endl;
                }
            }
        }
    }
    return 0;
}