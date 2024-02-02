#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int darahKita, seranganKita, shieldKita, darahMusuh, seranganMusuh, shieldMusuh;
    cin >> darahKita >> seranganKita >> shieldKita >> darahMusuh >> seranganMusuh >> shieldMusuh;

    ofstream outputfile;
    outputfile.open("battlelog.txt");

    int totalSerangKita = seranganKita - shieldMusuh, totalSerangMusuh = seranganMusuh - shieldKita;
    int ronde = 0;
    while ((darahKita > 0 || darahMusuh > 0))
    {
        darahMusuh -= totalSerangKita;
        darahKita -= totalSerangMusuh;
        ronde++;

        outputfile << "Ronde ke-" << ronde << endl
                   << "Kamu menyerang musuh dengan " << totalSerangKita << " damage." << endl
                   << "Health musuh sekarang " << darahMusuh << endl
                   << "Musuh menyerang kamu dengan " << totalSerangMusuh << " damage." << endl
                   << "Health kamu sekarang " << darahKita << endl
                   << endl;

        if (darahKita < totalSerangMusuh)
        {
            outputfile << "Musuh menang dalam " << ronde << " ronde dengan " << darahMusuh << " health tersisa!";
            break;
        }
        else if (darahMusuh < totalSerangKita)
        {
            outputfile << "Kamu menang dalam " << ronde << " ronde dengan " << darahKita << " health tersisa!";
            break;
        }
    }

    if (darahKita > darahMusuh)
    {
        cout << "Kamu menang dalam " << ronde << " ronde dengan " << darahKita << " health tersisa!";
    }
    else
    {
        cout << "Musuh menang dalam " << ronde << " ronde dengan " << darahMusuh << " health tersisa!";
    }
}