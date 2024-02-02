#include <iostream>
using namespace std;

int main()
{
    int N;
    int x = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x;
            x++;
            if (x > 9)
            {
                x -= 10;
            }
        }
        cout << endl;
    }
}