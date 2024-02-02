#include <iostream>
using namespace std;

int main()
{
    int N = 5;

    for (int y = 1; y <= N; y++)
    {
        for (int x = 1; x <= N; x++)
        {
            if (x <= y && y <= 3 || y > 3 && y + x <= 6)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}