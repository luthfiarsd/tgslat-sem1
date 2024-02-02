#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    string isifile, file;
    int n;

    cout << "Nama file: ";
    cin >> file;

    infile.open(file);
    if (infile.is_open())
    {

        cout << "Banyaknya pergeseran karakter: ";
        cin >> n;
        while (!infile.eof())
        {
            getline(infile, isifile);
        }
        infile.close();

        file = "hasil-enkripsi-" + file;
        outfile.open(file);
        for (int i = 0; i < isifile.length(); i++)
        {
            if (isupper(isifile[i]))
            {
                outfile << char((isifile[i] + n - 'A') % 26 + 'A');
            }
            else
            {
                outfile << isifile[i];
            }
        }

        cout << "Silakan cek file yang baru muncul untuk melihat enkripsi";
        outfile.close();
    }
    else
    {
        cout << "File tidak ada";
    }
}