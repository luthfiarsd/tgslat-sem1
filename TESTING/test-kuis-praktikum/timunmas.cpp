#include <iostream>
using namespace std;

int main()
{
    int s, d, n;

    cin >> s >> d >> n;

    if (s > n)
    {
        cout << "Timun mas kehabisan bungkusan, ia dimakan raksasa";
    }
    else if (s > d)
    {
        cout << "Raksasa mencapai Timun Mas";
    }
    else
    {
        cout << "Raksasa kelelahan";
    }
}