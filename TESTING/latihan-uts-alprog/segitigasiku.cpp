#include <iostream>
using namespace std;

int main()
{
    int N = 5;

    for (int y = 1; y <= N; y++)
    {
        for (int k = 1; k < y; k++)
        {
            cout << " ";
        }
        for (int x = N; x >= y; x--)
        {
            cout << x;
        }
        cout << endl;
    }
}