#include <iostream>
using namespace std;

int main ()
{
    int x;

    cin >> x;

    if (x>0 && x<=9){
        cout << "satuan";
    } else if (x>=10 && x<=99){
        cout << "puluhan";
    } else if (x>=100 && x<=999){
        cout << "ratusan";
    } else if (x>=1000 && x<=9999){
        cout << "ribuan";
    } else if (x>=10000 && x<=99999){
        cout << "puluhribuan";
    }
}