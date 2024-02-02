#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int f, c, cmin, fmin;
    float x;

    cin >> x;

    f = trunc(x);
    c = trunc(x) + 1;
    cmin = trunc(x);
    fmin = trunc(x) + 1;

    if (x > 0)
    {
        cout << f << " " << c;
    }
    else if (x < 0)
    {
        cout << fmin << " " << cmin;
    }
    else if (x == 0)
    {
        cout << 0;
    }
}