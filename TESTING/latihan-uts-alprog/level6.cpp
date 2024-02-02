#include <iostream>
using namespace std;

int main()
{
    for (int y = 1; y <= 5; y++)
    {
        for (int x = 1; x <= 10; x++)
        {
            if ((y == 1 | y == 5) && x <= 8 && x >= 3 || x + y == 4 || x + y == 13 || x==y-2 || x== y+7)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}