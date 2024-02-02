#include <iostream>
using namespace std;

int main()
{
    int x, xf1, xf2, xfn;
    cin >> x;
    xf1 = 1;
    xf2 = 0;

    for (int i = 1; i <= x; i++)
    {
        xfn = xf1 + xf2;
        xf2 = xf1;
        xf1 = xfn;
        cout << xfn << endl;
    }
}