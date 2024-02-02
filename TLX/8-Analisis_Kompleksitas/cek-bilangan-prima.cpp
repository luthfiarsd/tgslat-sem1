#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int angka[n];
    bool prima[n];

    for (int i = 0; i < n; i++)
    {
        cin >> angka[i];
    }

    for (int i = 0; i < n; i++)
    {
        int faktor = 0;
        for (int j = 1; j <= angka[i]; j++)
        {
            if (angka[i] % j == 0)
            {
                faktor += 1;
            }
        }
        if (faktor == 2)
        {
            prima[i] = true;
        }
        else
        {
            prima[i] = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (prima[i] == true)
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "BUKAN" << endl;
        }
    }
}