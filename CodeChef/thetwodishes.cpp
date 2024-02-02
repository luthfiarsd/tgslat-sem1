#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int N[T], S[T];
    for (int i = 0; i < T; i++)
    {
        cin >> N[i] >> S[i];
    }

    int hasil[T];
    for (int i = 0; i < T; i++)
    {
        hasil[i] = -999;
    }

    for (int x = 0; x < T; x++)
    {
        for (int i = 0; i <= N[x]; i++)
        {
            for (int j = N[x]; j >= 0; j--)
            {
                if (i + j == S[x])
                {
                    if (hasil[x] <= abs(i - j))
                    {
                        hasil[x] = abs(i - j);
                    }
                }
            }
        }
    }

    for (int i = 0; i < T; i++)
    {
        cout << hasil[i] << endl;
    }
    return 0;
}
