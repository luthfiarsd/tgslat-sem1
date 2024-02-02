#include <iostream>
#include <iomanip>
using namespace std;

struct waktu
{
    int hari;
    int jam;
    int menit;
    int detik;
};

void inputWaktu(waktu &time)
{
    cout << "Masukkan jam   = ";
    cin >> time.jam;
    cout << "Masukkan menit = ";
    cin >> time.menit;
    cout << "Masukkan detik = ";
    cin >> time.detik;
}

void outputWaktu(waktu time)
{
    time.hari = 0;
    while (time.jam >= 24)
    {
        time.hari++;
        time.jam -= 24;
    }
    while (time.menit >= 60)
    {
        time.jam++;
        time.menit -= 60;
    }
    while (time.detik >= 60)
    {
        time.menit++;
        time.detik -= 60;
    }

    cout << setw(2) << setfill('0') << time.jam << ":" << setw(2) << setfill('0') << time.menit << ":" << setw(2) << setfill('0') << time.detik;
    if (time.hari > 0)
    {
        cout << endl
             << "Lebih " << time.hari << " hari" << endl;
    }
}

int main()
{
    waktu time;
    inputWaktu(time);
    outputWaktu(time);
}