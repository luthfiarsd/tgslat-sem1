#include <iostream>
using namespace std;

void fungsiSwap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5, y = 10;

    fungsiSwap(x, y);

    cout << x << " " << y;
}