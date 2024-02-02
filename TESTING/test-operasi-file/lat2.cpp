#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
    string s, f;
    int n;
    ofstream outfile;

    getline(cin, s);
    cin >> n >> f;

    outfile.open(f);
    if (!outfile.good())
    {
        cout << "error";
        exit(1);
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
            {
                outfile << char((s[i] + n - 'A') % 26 + 'A');
            }
            else
            {
                outfile << s[i];
            }
        }
    }

    outfile.close();
    return 0;
}