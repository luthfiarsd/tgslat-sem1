#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;

    bool pangkat;
    for (int i = 0; i <= x; i++)
    {
        if (pow(2, i) == x)
        {
            pangkat = true;
            break;
        }
        else if (i == x)
        {
            pangkat = false;
        }
    }

    if (pangkat==true){
        cout << "ya";
    } else{
        cout << "bukan";
    }
}