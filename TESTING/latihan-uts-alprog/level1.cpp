#include <iostream>
using namespace std;

int main()
{
    int N = 5;

    for (int y = 1; y <= N; y++)
    {
        for (int x = 1; x <= N; x++)
        {
            if (y == 2 || y == 3 || y == 4)
            {
                if (x == 2 || x == 3 || x == 4)
                {
                    cout << "  ";
                }
                else
                {
                    cout << " *";
                }
            }
            else
            {
                cout << " *";
            }
        }
        cout << endl;
    }
}