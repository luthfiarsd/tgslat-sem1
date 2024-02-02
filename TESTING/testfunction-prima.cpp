#include <iostream>
#include <math.h>
using namespace std;

int isPrima(int bil)
{
    float sqrtBil = sqrt(bil);
    if (bil < 2)
        return 0; // false
    if (bil == 2)
        return 1; // true
    if (bil % 2 == 0)
        return 0; // false
    for (int gjl = 3; gjl <= sqrtBil; gjl += 2)
    {
        if (bil % gjl == 0)
            return 0; //  false
    }
    return 1; // true
}
int main()
{
    cout << "Bilangan-bilangan prima" << endl;
    for (int n = 1; n < 100; n++)
    {
        if (isPrima(n))
            cout << n << " ";
    }
    cout << endl;
}
