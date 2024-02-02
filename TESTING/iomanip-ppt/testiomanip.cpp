#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double pi = 3.141592654;
    // Tampilan default: left justified, presisi 6.
    cout << setprecision(4) << setw(20) << setfill('x') << left << pi << endl;    
    // Ubah dg precision 4, lebar field 12, isi dg #
    // cout.precision(4);
    // cout.width(12);
    // cout.fill('#');
    // cout << pi << endl;
    // Ubah presisi ke 10
    // cout.precision(10);
    cout << pi << endl;
    return 0;
}
