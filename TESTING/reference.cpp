#include <iostream>
using namespace std;

int main()
{
    int *pNum;
    pNum = new int;
    // kode di atas membuat alokasi variabel dan memori baru, namun tanpa nama dan value;

    cout << pNum << '\n';
    cout << *pNum << '\n';

    // value assignment
    *pNum = 3;

    cout << pNum << '\n';
    cout << *pNum << '\n';
}