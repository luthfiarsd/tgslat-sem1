#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream infile;
    string file;
    int konsonan = 0, vokal = 0;
    char c;

    cout << "Nama file: ";
    cin >> file;

    infile.open(file);

    if (infile.is_open())
    {
        while (infile.get(c))
        {
            c = toupper(c);
            if (isalpha(c))
            {
                if (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O')
                {
                    vokal++;
                }
                else
                {
                    konsonan++;
                }
            }
        }

        infile.close();
        cout << "Huruf vokal: " << vokal << endl
             << "Huruf konsonan: " << konsonan;
    }
    else
    {
        cout << "File tidak ada";
    }
}