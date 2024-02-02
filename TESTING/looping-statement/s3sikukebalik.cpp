#include <iostream>
using namespace std;

int main (){
    int x;

    cin >> x;

    for (int b=1; b<=x; b++){
        for (int a=x; a>=b; a--){
            cout << "*";
        }
        cout << endl;
    }
}