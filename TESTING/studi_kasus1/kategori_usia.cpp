#include <iostream>
using namespace std;

int main (){
    int x;

    cout << "Masukkan usia: ";
    cin >> x;

    if (8<=x and 12>=x){
        cout << "Kelompok usia: Anak-anak";
    } else if (12<x and 17>=x){
        cout << "Kelompok usia: Remaja";
    } else if (18<x and 59>=x){
        cout << "Kelompok usia: Dewasa";
    } else if (60<x and 70>=x){
        cout << "Kelompok usia: Lansia";
    } else {
        cout << "Kesalahan dalam menginput (usia tidak mungkin atau memasukkan tipe data lain)";
    }
}