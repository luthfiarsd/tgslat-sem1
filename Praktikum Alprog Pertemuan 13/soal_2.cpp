#include <iostream>
using namespace std;

struct Mahasiswa
{
    string npm, nama;
    float nilai;
};

void inputMahasiswa(int N, Mahasiswa mahasiswa[])
{
    for (int i = 0; i < N; i++)
    {
        cin >> mahasiswa[i].npm;
        cin.ignore();
        getline(cin, mahasiswa[i].nama);
        cin >> mahasiswa[i].nilai;
    }
}

void sorting(int N, Mahasiswa mahasiswa[])
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (mahasiswa[j].nilai < mahasiswa[j + 1].nilai)
            {
                Mahasiswa temp = mahasiswa[j];
                mahasiswa[j] = mahasiswa[j + 1];
                mahasiswa[j + 1] = temp;
            }
        }
    }
}

void outputMahasiswa(int N, Mahasiswa mahasiswa[])
{
    for (int i = 0; i < N; i++)
    {
        cout << mahasiswa[i].npm << " " << mahasiswa[i].nama << " " << mahasiswa[i].nilai << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    Mahasiswa mahasiswa[N];
    inputMahasiswa(N, mahasiswa);

    sorting(N, mahasiswa);

    outputMahasiswa(N, mahasiswa);
}