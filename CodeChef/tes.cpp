#include <iostream>
using namespace std;

bool cekPrima(int i)
{
    if (i <= 1)
    {
        return 0;
    }
    for (int j = 2; j * j <= i; j++)
    {
        if (i % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b;

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (cekPrima(i))
        {
            cout << i << ", ";
        }
    }
    cout << endl;
}