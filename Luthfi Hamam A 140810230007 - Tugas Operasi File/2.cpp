#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    string file;
    char c, cBaca;
    int jumlah = 0;

    cout << "Nama file: ";
    cin >> file;

    infile.open(file);

    if (infile.is_open())
    {
        cout << "Huruf yang ingin dihitung: ";
        cin >> c;
        while (infile.get(cBaca))
        {
            if (toupper(cBaca) == toupper(c))
            {
                jumlah++;
            }
        }
        infile.close();
        cout << "Banyaknya jumlah huruf " << c << ": " << jumlah;
    }
    else
    {
        cout << "file tidak ada";
    }
}