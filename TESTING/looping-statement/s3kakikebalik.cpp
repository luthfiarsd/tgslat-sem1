#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int y = 1; y <= N; y++)
    {
        for (int spasi = 1; spasi < y; spasi++)
        {
            cout << " ";
        }
        for (int x = N; x >= (y * 2 - 1); x--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
