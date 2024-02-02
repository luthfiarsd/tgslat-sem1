#include <iostream>
using namespace std;

struct waktu
{
    int jam;
    int menit;
    int detik;
};

int main()
{
    waktu waktuMasuk, waktuKeluar, lamaParkir;
    int tarif = 0;

    cout << "Waktu masuk parkir (misal 09:00:00) : ";
    cin >> waktuMasuk.jam;
    cin.ignore();
    cin >> waktuMasuk.menit;
    cin.ignore();
    cin >> waktuMasuk.detik;

    cout << "Waktu keluar parkir (misal 10:00:00) : ";
    cin >> waktuKeluar.jam;
    cin.ignore();
    cin >> waktuKeluar.menit;
    cin.ignore();
    cin >> waktuKeluar.detik;

    lamaParkir.jam = waktuKeluar.jam - waktuMasuk.jam;
    if (lamaParkir.jam < 0)
    {
        lamaParkir.jam = 24 + lamaParkir.jam;
    }

    lamaParkir.menit = waktuKeluar.menit - waktuMasuk.menit;
    if (lamaParkir.menit < 0)
    {
        lamaParkir.jam -= 1;
        lamaParkir.menit = 60 + lamaParkir.menit;
    }

    lamaParkir.detik = waktuKeluar.detik - waktuMasuk.detik;
    if (lamaParkir.detik < 0)
    {
        lamaParkir.menit -= 1;
        lamaParkir.detik = 60 + lamaParkir.detik;
    }

    cout << "Lama parkir : " << lamaParkir.jam << ":" << lamaParkir.menit << ":" << lamaParkir.detik << endl;

    for (int i = 0; i <= lamaParkir.jam; i++)
    {

        if (lamaParkir.jam == 0 && lamaParkir.menit <= 10)      //kalau baru masuk <= 10 menit gratis (hanya drop off, antar, dll), jika lebih masuk tarif
        {
            tarif += 0;
        }
        else if (lamaParkir.jam == 0 && lamaParkir.menit > 10)
        {
            tarif += 2000;
        }
        else
        {
            tarif += 1000;
        }
    }

    cout << "Tarif Parkir : " << tarif;
}
