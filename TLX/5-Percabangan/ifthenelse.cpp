#include <iostream>
using namespace std;

int main (){
    int x;

    cin >> x;

    if (x>0){
        cout << "positif";
    } else if (x==0){
        cout << "nol";
    } else if (x<0){
        cout << "negatif";
    }
}