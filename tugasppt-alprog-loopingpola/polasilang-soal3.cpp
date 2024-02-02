/*
Nama        : Luthfi Hamam Arsyada
NPM         : 140810230007
Program     : Pola Silang (X)
Deskripsi   : Mencetak pola X dengan bintang
Tanggal     : 26/9/23
*/

#include <iostream>
using namespace std;

int main()
{
    int N=5;

    for (int y = 1; y <=N; y++)
    {
        for (int x = 1; x <=N; x++)
        {
            if (x==y || x == N - y +1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}