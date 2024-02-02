#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[6] = {6, 7, 4, 69, 3, 22};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
