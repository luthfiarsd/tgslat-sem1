#include <iostream>
using namespace std;

int main()
{
    int x, z, pengamatan;
    cin >> x >> z;

    for (int i = 0; i < z; i++)
    {
        pengamatan = x / 2;
        x = x + pengamatan;
    }

    cout << x;
}