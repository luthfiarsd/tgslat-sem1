#include <iostream>
using namespace std;

int main()
{
    int N, hasil = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        hasil += a;
    }

    cout << hasil;
}