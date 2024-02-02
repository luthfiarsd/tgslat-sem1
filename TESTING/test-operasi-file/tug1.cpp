#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    string p;
    int n;
    double b[5];

    cin >> p >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> b[i];
    }

    infile.open(p);

    for (int i = 0; i < n; i++)
    {
        string nama;
        double nilai, total = 0;
        infile >> nama;

        for (int j = 0; j < 5; j++)
        {
            infile >> nilai;
            nilai *= b[j];
            total += nilai;
        }

        cout << nama << " " << total << endl;
    }

    infile.close();
}