#include <iostream>
using namespace std;

void kalkulator(float x, float y)
{
    float jumlah = x + y, kurang = x - y, kali = x * y, bagi = x / y;
    cout << jumlah << endl
         << kurang << endl
         << kali << endl
         << bagi;
}

int main()
{
    kalkulator(5, 3);
}