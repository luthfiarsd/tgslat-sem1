#include <iostream>
using namespace std;

void transformasi(string tulisan, int selang, int n)
{
    string hasil[n];
    int temp1 = selang, temp2 = 0;

    for (int i = 0; i < (n - temp1); i++)
    {
        hasil[i] = tulisan[selang];
        selang++;
    }
    for (int j = (n - temp1); j < n; j++)
    {
        hasil[j] = tulisan[temp2];
        temp2++;
    }

    for (int k = 0; k < n; k++)
    {
        cout << hasil[k];
    }
}

int main()
{
    string tulisan;
    cin >> tulisan;
    int selang, n = tulisan.length();
    cin >> selang;

    transformasi(tulisan, selang, n);
}