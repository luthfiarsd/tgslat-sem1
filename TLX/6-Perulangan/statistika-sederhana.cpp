#include <iostream>
using namespace std;

int main()
{
    int N, maks = -999999, min = 999999;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if (x > maks)
        {
            maks = x;
        }
        if (x < min)
        {
            min = x;
        }
    }

    cout << maks << " " << min;
}