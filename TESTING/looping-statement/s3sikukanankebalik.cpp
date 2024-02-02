#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int x = 1; x <= n; x++)
    {
        for (int z = 1; z < x; z++)
        {
            cout << " ";
        }
        for (int y = n; y >= x; y--)
        {
            cout << "*";
        }
        cout << endl;
    }
}