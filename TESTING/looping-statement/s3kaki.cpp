#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int y = 1; y <= N; y++)
    {
        for (int spasi = N; spasi > y; spasi--)
        {
            cout << " ";
        }
        for (int x = 1; x <= (y*2-1); x++)
        {
            cout << "*";
            
        }
        cout << endl;
    }
}