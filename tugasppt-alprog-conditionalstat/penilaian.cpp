/*
Nama        : Luthfi Hamam Arsyada
NPM         : 140810230007
Program     : Penilaian
Deskripsi   : Penilaian dengan abjad A, B, C, D, dan E
Tanggal     : 19/9/23
*/

#include <iostream>
using namespace std;

int main (){
    int nilai, A, B, C, D, E;       //Deklarasi

    cout << "Masukkan nilai: ";     //Output sebagai perintah
    cin >> nilai;                   //Input nilai

    if (nilai<=100 && nilai>80) {       //Pernyataan kondisi, output berdasr nilai
        cout << "Nilai anda A";
    } else if (nilai<=80 && nilai>70) {
        cout << "Nilai anda B";
    } else if (nilai<=70 && nilai>65) {
        cout << "Nilai anda C";
    } else if (nilai<=65 && nilai>50) {
        cout << "Nilai anda D";
    } else if (nilai <=50 && nilai>=0) {
        cout << "Nilai anda E";
    } else {
        cout << "Salah memasukkan nilai";
    }
}