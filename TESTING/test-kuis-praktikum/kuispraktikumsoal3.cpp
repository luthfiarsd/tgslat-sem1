#include <iostream>
using namespace std;

int main (){
    int x1, x2, v1, v2, i = 1;
    bool sama;
    cin >> x1 >> v1 >> x2 >> v2;
    int jumlahSatu = x1;
    int jumlahDua = x2;

    while (i >= 0){
        jumlahSatu += v1;
        jumlahDua += v2;

        if (jumlahSatu == jumlahDua){
        sama = true;

        break;
        }

        else {
        sama = false;
        }
        i++;
    }

    if (sama == true){
        cout << "Yes";
    }
    else{
        cout << "NO"; }


}