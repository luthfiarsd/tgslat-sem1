#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (!(s[i] == 'A' || s[i] == 'I' || s[i] == 'U' || s[i] == 'E' || s[i] == 'O' || s[i] == 'N'))
        {
            if (i == s.length() - 1)
            {
                cout << "NO";
                return 0;
            }
            if (!(s[i + 1] == 'A' || s[i + 1] == 'I' || s[i + 1] == 'U' || s[i + 1] == 'E' || s[i + 1] == 'O' || s[i + 1] == 'N'))
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
