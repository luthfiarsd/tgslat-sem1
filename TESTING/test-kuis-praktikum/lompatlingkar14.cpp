#include <iostream>
using namespace std;

int main()
{

    int n = 4, kelinci = 0, kodok = 0, kangguru = 0;
    for (int i = 1; i <= n; i++)
    {
        kelinci += 3;
        kodok += 2;
        kangguru += 6;
    }

    while (kelinci >= 14)
    {

        kelinci -= 15;
    }
    while (kodok >= 14)
    {
        kodok -= 15;
    }
    while (kangguru >= 14)
    {

        kangguru -= 15;
    }

    cout << kelinci << "," << kodok << "," << kangguru;
}