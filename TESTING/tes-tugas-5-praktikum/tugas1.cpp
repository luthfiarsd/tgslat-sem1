#include <iostream>
using namespace std;

void selectionSort(int arr[], int &k){
    int max_idx;
    for (int i = 0; i < k; i++){
        max_idx = i;
        for (int j = i+1; j < 20; j++) if (arr[j]  > arr[max_idx]) max_idx = j;
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}

void input(int arr[], int &k){
    for(int i = 0; i < 20; i++) cin >> arr[i]; cin >> k; 
}

int main(){
    int arr[20], k; input(arr, k);
    selectionSort(arr, k);
    cout << arr[k-1] << endl;
}