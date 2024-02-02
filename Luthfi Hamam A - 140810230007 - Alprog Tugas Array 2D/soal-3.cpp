#include <iostream>
#include <cmath>
using namespace std;

double ratarata(const int data[], int n)
{
    double hasil = 0.0;
    for (int i = 0; i < n; i++)
    {
        hasil += data[i];
    }
    return hasil / n;
}

double standarDeviasi(const int data[], int n)
{
    double rataRata = ratarata(data, n);
    double totalSelisihKuadrat = 0.0;

    for (int i = 0; i < n; i++)
    {
        double selisih = data[i] - rataRata;
        totalSelisihKuadrat += selisih * selisih;
    }

    double standarDeviasi = sqrt(totalSelisihKuadrat / n);
    return standarDeviasi;
}

int main()
{
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];
    cout << "Masukkan deret data: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    double standarDev = standarDeviasi(data, n);

    cout << "Standar Deviasi: " << standarDev << endl;

    return 0;
}