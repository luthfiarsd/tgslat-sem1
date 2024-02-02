#include <iostream>
using namespace std;

void penjumlahanTiga(int &x)
{
    x += 3;
}
int main()
{
    int x = 3;
    penjumlahanTiga(x);
    cout << x;
}
