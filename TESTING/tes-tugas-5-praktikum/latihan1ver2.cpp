#include <iostream>
using namespace std;

void transformasi(string tulisan, int &selang)
{
    string hasil = tulisan;
    int temp1 = selang, temp2 = 0, n = hasil.length();

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

    cout << hasil << endl; 
}

int main()
{
    string tulisan;
    cin >> tulisan;
    int selang;
    cin >> selang;

    transformasi(tulisan, selang);
}