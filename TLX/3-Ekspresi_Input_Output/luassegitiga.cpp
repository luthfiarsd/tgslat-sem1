#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x, y;

    cin >> x >> y;

    cout << fixed << setprecision(2) << x * y / 2;
}

