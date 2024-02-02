#include <iostream>
using namespace std;

int main()
{
    int x, hasil=0, sisa, pengali=1; 
    cin >> x;

    for (int i=x; i>0; pengali*=10){
        sisa = i%8;
        hasil += sisa*pengali;
        i/=8;
    }

    cout << hasil;














}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;

//     cin >> N;

//     int pengali = 1, hasil=0, sisa;
//     while (N > 0)
//     {
//         sisa = N % 8;
//         hasil += sisa * pengali;
//         pengali *= 10;
//         N /= 8;
//     }

//     cout << hasil;
// }