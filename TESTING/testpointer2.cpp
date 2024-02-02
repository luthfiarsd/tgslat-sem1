#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int *p = &n;
    int &r = *p;

    cout << n << " " << p << " " << *p << " " << r << " " << &r;
}