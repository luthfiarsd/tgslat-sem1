#include <iostream>
#include <string>
using namespace std;

int main()
{
    string waktu;
    getline(cin, waktu);

    string AMPM = waktu.substr(9, 2);
    string jam = waktu.substr(0, 2);
    string menit = waktu.substr(3, 2);
    string detik = waktu.substr(6, 2);
    if (jam >= "12")
        if (AMPM == "AM")
        {
            if (jam == "12")
            {
                jam = "00";
            }
        }
        else if (AMPM == "PM")
        {
            if (jam != "12")
            {
                int jamint = stoi(jam);
                jamint += 12;
                jam = to_string(jamint);
            }
        }
    cout << jam << ":" << menit << ":" << detik;
}