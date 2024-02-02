#include <iostream>
using namespace std;

int main()
{
    int N = 9;

    for (int y = 1; y <= N; y++)
    {
        for (int x = 1; x <= N; x++)
        {
            if (x == 5 || y == 5 || x + y == 6 || x + y == 14 || x == y - 4 || x == y + 4)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}