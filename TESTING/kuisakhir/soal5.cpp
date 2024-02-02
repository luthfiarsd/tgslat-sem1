#include <iostream>
using namespace std;

void singFiveLittleMonkeys()
{
    for (int i = 5; i > 0; i--)
    {
        cout << i << " little monkeys jumping on the bed," << endl
             << "One fell off and bumped his head," << endl
             << "Mama called the doctor, and the doctor said," << endl
             << "\"No more monkeys jumping on the bed !\"" << endl
             << endl;
    }
}

int main()
{
    singFiveLittleMonkeys();
}
