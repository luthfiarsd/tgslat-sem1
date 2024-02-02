/*
Nama        : Luthfi Hamam Arsyada
NPM         : 140810230007
Program     : Konversi format jam AM/PM -> 24 Jam
Deskripsi   : Mengubah format jam dari AM/PM menjadi format 24 jam
Tanggal     : 19/9/23
*/

#include <iostream>
using namespace std;

int main(){
    // Deklarasi
    int jam, menit, detik;
    char waktu;                                         //char agar bisa di-toupper
    bool kesalahan;

    //input waktu
    cout << "Masukkan waktu dengan format AM/PM (Misal 03:10:20 PM): ";
    cin >> jam;          
    cin.ignore ();      
    cin >> menit;
    cin.ignore ();
    cin >> detik;
    cin.ignore ();
    cin >> waktu;

    //Cek kondisi jam menit detik dll
    if (jam<=12 && jam>=0){
        kesalahan= 0;                                   //waktu benar
        if (toupper(waktu)=='A' && (jam==12 || jam== 24)){            
            jam = 0;                                    //12am tengah malam jadi 00
        } else if (toupper(waktu)=='P' && jam<12){        
            jam +=12;                                   //ditambah 12 jam, kecuali jam 12 siang = jam 12pm
        }
    } else {
        kesalahan=1;                                    //waktu salah
    }

    if (menit>=60){
        kesalahan=1;                                    
    }

    if (detik>=60){
        kesalahan=1;
    }

    while (detik>=60){
            detik-=60;
            menit+=1;
        }
    while (menit>=60){
            menit-=60;
            jam+=1;
        }
    
    //OUTPUT
    if (kesalahan==0){                                      //jika kesalahan= false -> benar
        cout << "Hasil konversi ke 24 jam: ";
        if (jam<10){                                        //kondisi jika angka hanya dimasukkan 1 digit
            cout << "0";
        }

        cout << jam << ":";

        if (menit<10){
            cout << "0";
        }

        cout << menit << ":";

        if (detik<10){
            cout << "0";
        }

        cout << detik;
    } else {
        // cout << "Salah memasukkan waktu (format AM/PM)!";   //jika kesalahn=true -> salah
        cout << jam << ":" << menit << ":" << detik;
    }
}