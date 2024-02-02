#include <iostream>
using namespace std;

const int maksBaris = 3;
const int maksKolom = 3;

void input(int matrix[maksBaris][maksKolom], int &baris, int &kolom)
{
    cout << "Masukkan panjang baris: ";
    cin >> baris;
    cout << "Masukkan panjang kolom: ";
    cin >> kolom;

    cout << "Masukkan matriks:" << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void output(int matrix[maksBaris][maksKolom], int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void tambah(int matriks1[maksBaris][maksKolom], int matriks2[maksBaris][maksKolom], int hasil[maksBaris][maksKolom], int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void kali(int matriks1[maksBaris][maksKolom], int matriks2[maksBaris][maksKolom], int hasil[maksBaris][maksKolom], int baris1, int cols1, int baris2, int cols2)
{
    for (int i = 0; i < baris1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

void transpose(int matriks[maksBaris][maksKolom], int transposisi[maksBaris][maksKolom], int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            transposisi[j][i] = matriks[i][j];
        }
    }
}

void jumlahBaris(int matrix[maksBaris][maksKolom], int baris, int kolom, int hasilBaris[maksBaris])
{
    for (int i = 0; i < baris; i++)
    {
        hasilBaris[i] = 0;
        for (int j = 0; j < kolom; j++)
        {
            hasilBaris[i] += matrix[i][j];
        }
    }
}

void jumlahKolom(int matrix[maksBaris][maksKolom], int baris, int kolom, int hasilKolom[maksKolom])
{
    for (int j = 0; j < kolom; j++)
    {
        hasilKolom[j] = 0;
        for (int i = 0; i < baris; i++)
        {
            hasilKolom[j] += matrix[i][j];
        }
    }
}

void cetakLarik(int larik[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << larik[i] << " ";
    }
    cout << endl;
}

void menu()
{
    cout << "1. Penjumlahan" << endl;
    cout << "2. Perkalian" << endl;
    cout << "3. Transpose" << endl;
    cout << "4. Jumlah baris & kolom" << endl;
    cout << "5. Selesai" << endl
         << endl;
}

int main()
{
    int matriks1[maksBaris][maksKolom];
    int matriks2[maksBaris][maksKolom];
    int hasil[maksBaris][maksKolom];
    int transposisi1[maksKolom][maksKolom];
    int transposisi2[maksKolom][maksKolom];
    int jumlahBaris1[maksBaris];
    int jumlahKolom1[maksKolom];
    int jumlahBaris2[maksBaris];
    int jumlahKolom2[maksKolom];
    int jBaris1, jKolom1, jBaris2, jKolom2;

    cout << "Matriks pertama:" << endl;
    input(matriks1, jBaris1, jKolom1);
    output(matriks1, jBaris1, jKolom1);

    cout << "Matriks kedua:" << endl;
    input(matriks2, jBaris2, jKolom2);
    output(matriks2, jBaris1, jKolom1);

    bool oke = true;
    do
    {
        menu();
        int opsi;
        cin >> opsi;
        switch (opsi)
        {
        case 1:
            if (jBaris1 == jBaris2 && jKolom1 == jKolom2)
            {
                tambah(matriks1, matriks2, hasil, jBaris1, jKolom1);
                cout << "Hasil penjumlahan matriks:" << endl;
                output(hasil, jBaris1, jKolom1);
            }
            else
            {
                cout << "Penjumlahan matriks tidak dapat dilakukan karena matriks tidak memiliki dimensi yang sama." << endl;
            }
            break;

        case 2:
            if (jKolom1 == jBaris2)
            {
                kali(matriks1, matriks2, hasil, jBaris1, jKolom1, jBaris2, jKolom2);
                cout << "Hasil perkalian matriks:" << endl;
                output(hasil, jBaris1, jKolom2);
            }
            else
            {
                cout << "Tidak bisa dikalikan antar dua matriks" << endl;
            }
            break;

        case 3:
            cout << "Transpose matriks 1:" << endl;
            transpose(matriks1, transposisi1, jBaris1, jKolom1);
            output(transposisi1, jKolom1, jBaris1);
            cout << endl;

            cout << "Transpose matriks 2:" << endl;
            transpose(matriks2, transposisi2, jBaris2, jKolom2);
            output(transposisi2, jKolom2, jBaris2);
            break;

        case 4:
            cout << "MATRIKS 1" << endl;
            jumlahBaris(matriks1, jBaris1, jKolom1, jumlahBaris1);
            cout << "Jumlah dari setiap baris:" << endl;
            cetakLarik(jumlahBaris1, jBaris1);

            jumlahKolom(matriks1, jBaris1, jKolom1, jumlahKolom1);
            cout << "Jumlah dari setiap kolom:" << endl;
            cetakLarik(jumlahKolom1, jKolom1);

            cout << "MATRIKS 2" << endl;
            jumlahBaris(matriks2, jBaris2, jKolom2, jumlahBaris2);
            cout << "Jumlah dari setiap baris:" << endl;
            cetakLarik(jumlahBaris2, jBaris2);

            jumlahKolom(matriks2, jBaris2, jKolom2, jumlahKolom2);
            cout << "Jumlah dari setiap kolom:" << endl;
            cetakLarik(jumlahKolom2, jKolom2);
            break;

        case 5:
            oke = false;
            break;

        default:
            cout << "Input tidak valid. Silakan coba lagi." << endl;
            break;
        }
    } while (oke);

    cout << "Program selesai" << endl;
    return 0;
}