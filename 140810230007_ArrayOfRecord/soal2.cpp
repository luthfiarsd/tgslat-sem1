#include <iostream>
#include <iomanip>
using namespace std;

struct mahasiswa
{
    char NPM[8];
    char nama[20];
    int nilai;
};

typedef mahasiswa LarikMhs[10];

void banyakMahasiswa(int &n);
void inputMahasiswa(LarikMhs &mhs, int n);
void cetakMahasiswa(LarikMhs mhs, int n);

int main()
{
    LarikMhs mhs;
    int n;
    banyakMahasiswa(n);
    inputMahasiswa(mhs, n);
    cetakMahasiswa(mhs, n);
    return 0;
}

void banyakMahasiswa(int &n)
{
    cout << "Banyak mahasiswa : ";
    cin >> n;
}

void inputMahasiswa(LarikMhs &mhs, int n)
{
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Mahasiswa ke - " << i + 1 << endl;
        cout << "Nama  : ";
        cin.ignore();
        cin.getline(mhs[i].nama, sizeof(mhs[i].nama));
        cout << "NPM   : ";
        cin >> mhs[i].NPM;
        cin.ignore();
        cout << "Nilai : ";
        cin >> mhs[i].nilai;
        cout << endl;
    }
}

void cetakMahasiswa(LarikMhs mhs, int n)
{
    cout << "+----------------+" << endl;
    cout << "| DATA MAHASISWA |" << endl;
    cout << "+----------------+" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << mhs[i].NPM << setw(20) << mhs[i].nama << setw(10) << mhs[i].nilai << endl;
    }
}