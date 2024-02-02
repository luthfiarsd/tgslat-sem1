#include <iostream>
using namespace std;

struct vaccine
{
    int D, L, R;
};

int main()
{
    int T;
    cin >> T;

    vaccine vaccineDate[T];

    for (int i = 0; i < T; i++)
    {
        cin >> vaccineDate[i].D >> vaccineDate[i].L >> vaccineDate[i].R;
    }

    for (int i = 0; i < T; i++)
    {
        if (vaccineDate[i].D <= vaccineDate[i].R && vaccineDate[i].D >= vaccineDate[i].L)
        {
            cout << "Take second dose now" << endl;
        }
        else if (vaccineDate[i].D >= vaccineDate[i].R)
        {
            cout << "Too Late" << endl;
        }
        else if (vaccineDate[i].D <= vaccineDate[i].L)
        {
            cout << "Too Early" << endl;
        }
    }
}
