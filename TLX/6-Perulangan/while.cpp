#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x, jumlah = 0;
    while (scanf("%d", &x) != EOF)
    {
        jumlah += x;
    }
    printf("%d\n", jumlah);
}