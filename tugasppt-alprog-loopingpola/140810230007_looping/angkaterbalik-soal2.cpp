/*
Nama        : Luthfi Hamam Arsyada
NPM         : 140810230007
Program     : Angka Terbalik
Deskripsi   : Mencetak angka secara terbalik
Tanggal     : 27/9/23
*/

#include <iostream>
using namespace std;

int main()
{
    int deret, deretbalik;

    cout << "masukkan angka yang ingin dibalikkan: ";
    cin >> deret;

    if (deret % 10 == 0)
    {
        cout << "0";
    }
    
    deretbalik = 0;
    while (deret > 0)
    {
        int digit = deret % 10;
        deretbalik = deretbalik * 10 + digit;
        deret /= 10;
    }


    cout << deretbalik;
}