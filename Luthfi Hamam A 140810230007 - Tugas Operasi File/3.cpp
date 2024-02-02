#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string file;
    char c;
    int pasangan = 0;
    bool kurawalDepan = false, kurawalBelakang = false;

    cout << "Nama file: ";
    cin >> file;

    ifstream infile;
    infile.open(file);

    if (infile.is_open())
    {
        while (infile.get(c))
        {
            if (c == '{')
            {
                kurawalDepan = true;
            }
            else if (c == '}')
            {
                kurawalBelakang = true;
            }

            if (kurawalDepan == true && kurawalBelakang == true)
            {
                pasangan += 1;
                kurawalDepan = false;
                kurawalDepan = false;
            }
        }
        cout << "Jumlah pasangan kurawal: " << pasangan << endl;
    }
    else
    {
        cout << "File tidak ada" << endl;
    }

    infile.close();
    return 0;
}