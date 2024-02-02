#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    int posisi;
    for (int i = 0; i < n - 1; i++)
    {
        posisi = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[posisi] > arr[j])
            {
                posisi = j;
            }
        }
        swap(arr[i], arr[posisi]);
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

void shellSort(int arr[], int n)
{
    int j;
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            for (j = i; j >= gap && temp < arr[j - gap]; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main()
{
    int n;
    cout << "Masukkan panjang deret : ";
    cin >> n;

    cout << "Masukkan deret : ";
    int deret[n];
    for (int i = 0; i < n; i++)
    {
        cin >> deret[i];
    }

    bool jalan = true;
    while (jalan == true)
    {
        int x;
        cout << endl
             << endl
             << "- Pilih Fitur -" << endl
             << "1. Bubble Sort" << endl
             << "2. Selection Sort" << endl
             << "3. Insertion Sort" << endl
             << "4. Shell Sort" << endl
             << "5. Keluar" << endl
             << endl
             << "=> ";
        cin >> x;

        switch (x)
        {
        case 1:
            bubbleSort(deret, n);
            break;
        case 2:
            selectionSort(deret, n);
            break;
        case 3:
            insertionSort(deret, n);
            break;
        case 4:
            shellSort(deret, n);
            break;
        default:
            jalan = false;
            break;
        }

        for (int i = 0; i < n; i++)
        {
            cout << deret[i] << " ";
        }
    }

    cout << endl
         << endl;
}