#include <iostream>
using namespace std;

int main()
{
    for (int y = 3; y >= 1; y--)
    {
        for (int x = 1; x <= 5; x++)
        {
            if (x >= y && x <= 5 - y + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int y = 2; y <= 4; y++)
    {
        for (int x = 1; x <= 5; x++)
        {
            if (x >= y && x <= 5 - y + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}