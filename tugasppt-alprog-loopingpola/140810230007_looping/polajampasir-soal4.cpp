/*
Nama        : Luthfi Hamam Arsyada
NPM         : 140810230007
Program     : Pola Jam Pasir
Deskripsi   : Mencetak pola jam pasir dengan bintang
Tanggal     : 27/9/23
*/

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

/*CARA LAIN

#include <iostream>
using namespace std;

int main()
{
    int N = 7;

    for (int y = 1; y <= N-3; y++)
    {
        for (int x = 1; x <= N; x++)
        {
            if (x >= y && x <= N - y + 1)
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

    for (int y = N-4; y >=1; y--)
    {
        for (int x = 1; x <= N; x++)
        {
            if (x >= y && x <= N - y + 1)
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
*/
