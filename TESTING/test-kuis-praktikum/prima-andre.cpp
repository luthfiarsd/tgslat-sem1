#include <iostream>
using namespace std; 

int main() {
    int n; cin >> n;
    bool prima = true;
    if(n <= 1) {
        prima = false; 
    }
    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            prima = false; 
            break; 
        }
    }
    if(prima){
        cout << "mantap" << endl; 
    } else {
        cout << "waduh" << endl; 
    }
}