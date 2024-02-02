/*
Nama        : Luthfi Hamam Arsyada
NPM         : 140810230007
Program     : Bilangan prima hingga N
Deskripsi   : Memunculkan prima dari 0 hingga N (angka yang dimasukkan)
Tanggal     : 26/9/23
*/

#include <iostream>
using namespace std;

int main()
{
    int prima, N;

    cout << "Masukkan N: ";
    cin >> N;

    for (prima = 1; prima <= N; prima++)
    {
        if (prima == 2 || prima == 3 || prima == 5 || prima == 7)
        {
            cout << prima << " ";
        }
        else if (prima > 7 && prima % 2 != 0 && prima % 3 != 0 && prima % 5 != 0 && prima % 7 != 0)
        {
            cout << prima << " ";
        }
    }

    cout << endl;

    if (N == 2 || N == 3 || N == 5 || N == 7)
    {
        cout << N << " Termasuk prima";
    }
    else if (N > 7 && N % 2 != 0 && N % 3 != 0 && N % 5 != 0 && N % 7 != 0)
    {
        cout << N << " Termasuk prima";
    }
    else
    {
        cout << N << " Bukan prima!";
    }
}

/*CARA KEDUA

int main(){
    int n;
    int faktor=0;

    cin >> n;

    for (int i=1; i<=n; i++){
            if(n % i == 0){
                faktor += 1;
            }
    }
        if (faktor==2)
        cout <<"Prima";
        else
        cout <<"Bukan prima";
}

*/