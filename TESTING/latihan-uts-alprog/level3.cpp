#include <iostream>
using namespace std;

int main()
{
    for (int y = 1; y <= 3; y++)
    {
        for (int x = 1; x <= 5; x++)
        {
            if (x < y || x + y >= 7)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}