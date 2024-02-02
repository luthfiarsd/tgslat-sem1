#include <iostream>
using namespace std;

bool isPrima(int angka)
{
    if (angka <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= angka; i++)
    {
        if (angka % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int batas;
    cout << "masukkan batas: ";
    cin >> batas;
    cout << "hasilnya adalah: " << endl;
    for (int i = 1; i <= batas; i++)
    {
        if (isPrima(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}