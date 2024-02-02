#include <iostream>
using namespace std;

struct rich
{
    int A;
    int B;
    int X;
};

int main()
{
    int T;
    cin >> T;

    int hasil[T];
    rich richie[T];

    for (int i = 0; i < T; i++)
    {
        cin >> richie[i].A >> richie[i].B >> richie[i].X;

        hasil[i] = (richie[i].B - richie[i].A) / richie[i].X;
    }

    for (int i = 0; i < T; i++)
    {
        cout << hasil[i] << endl;
    }
}