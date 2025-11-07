#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    for (int a = 0; a <= 1000; a++) 
    {
        for (int b = a; b <= 1000; b++) 
        {   
            int c = 1000 - a - b;          
            if (c >= b && a + b + c == 1000) 
            {
                cout << a << " + " << b << " + " << c << " = 1000" << endl;
                counter++;
            }
        }
    }
    cout <<"Number of Triplets: " << counter;
    return 0;
}