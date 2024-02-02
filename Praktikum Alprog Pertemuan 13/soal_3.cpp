#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N;

    int matriks[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matriks[i][j];
        }
    }

    cin >> X;

    bool adaRanjau = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (X == matriks[i][j])
            {
                cout << j << " " << i << endl;
                adaRanjau = true;
            }
        }
    }

    if (adaRanjau == false)
    {
        cout << "Ladang bebas ranjau";
    }
}