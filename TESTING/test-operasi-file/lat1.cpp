#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    char c, ch;
    int total = 0;
    ifstream infile;

    cin >> s;
    infile.open(s);

    cin >> c;

    if (!infile.good())
    {
        cout << "error coy";
    }
    else
    {
        while (!infile.eof())
        {
            infile.get(ch);
            if (toupper(c) == toupper(ch))
            {
                total++;
            }
        }
    }

    cout << total;

    infile.close();
}