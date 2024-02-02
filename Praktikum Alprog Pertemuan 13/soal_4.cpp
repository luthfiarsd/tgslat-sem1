#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arrayPertama = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> *(arrayPertama + i);
    }

    int *arrayKedua = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> *(arrayKedua + i);
    }

    int *arraySemua = new int[n * 2];
    for (int i = 0; i < n; ++i)
    {
        *(arraySemua + i) = *(arrayPertama + i);
        *(arraySemua + n + i) = *(arrayKedua + i);
    }

    for (int i = 0; i < n * 2; ++i)
    {
        cout << *(arraySemua + i);
        if (i < 2 * n - 1)
        {
            cout << " ";
        }
    }

    delete[] arrayPertama;
    delete[] arrayKedua;
    delete[] arraySemua;
}