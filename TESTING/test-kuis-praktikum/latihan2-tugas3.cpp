#include <iostream>
using namespace std;

int main (){
    int n;

    cin >> n;

    if (n>4){
        for (int deret=n-3; deret<=n; deret++){
            cout << deret << " ";
        }
    } else if (n<=4 && n>0){
        for (int deret=1; deret<=n; deret++){
            cout << deret << " ";
        }
    }
}