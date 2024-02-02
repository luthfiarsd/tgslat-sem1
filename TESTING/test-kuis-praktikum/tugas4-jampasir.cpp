#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++)
    { // baris
        for (int j = 1; j <= 7; j++)
        { // kolom
            if (j >= i && j + i <= 8 || j + i >= 8 && j <= i)
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