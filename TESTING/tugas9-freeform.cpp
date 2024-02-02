#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

struct tracks
{
    string trackName;
    string artistName;
    float accousticness;
    float danceability;
    float energy;
    float instrumentalness;
    float liveness;
    float loudness;
    float speechiness;
    float tempo;
};

void header()
{
    cout << "=================" << endl
         << "ANALISIS PLAYLIST" << endl
         << "=================" << endl
         << endl;
}

void fitur(int &pilihFitur)
{
    cout << "PILIH FITUR: " << endl
         << "1. Acousticness" << endl
         << "2. Danceability" << endl
         << "3. Energy" << endl
         << "4. Instrumentalness" << endl
         << "5. Liveness" << endl
         << "6. Loudness" << endl
         << "7. Speechiness" << endl
         << "8. Tempo" << endl
         << "Tekan 9 untuk keluar" << endl
         << "=> ";
    cin >> pilihFitur;
    cout << endl;
}

void opsi(int &pilihOpsi)
{
    cout << "PILIH OPSI BERIKUT: " << endl
         << "1. Urutan lagu dari nilai terbesar berdasarkan fitur" << endl
         << "2. Rata-rata nilai berdasarkan fitur" << endl
         << "3. Standar deviasi nilai berdasarkan fitur" << endl
         << "Tekan 9 untuk keluar" << endl
         << "=> ";
    cin >> pilihOpsi;
    cout << endl;
}

void opsiSatu(tracks track[], int pembatas, int pilihFitur)
{
    for (int i = 0; i < pembatas; i++)
    {
        for (int j = 0; j < pembatas - i - 1; j++)
        {
            if (pilihFitur == 1 && track[j].accousticness < track[j + 1].accousticness ||
                pilihFitur == 2 && track[j].danceability < track[j + 1].danceability ||
                pilihFitur == 3 && track[j].energy < track[j + 1].energy ||
                pilihFitur == 4 && track[j].instrumentalness < track[j + 1].instrumentalness ||
                pilihFitur == 5 && track[j].liveness < track[j + 1].liveness ||
                pilihFitur == 6 && track[j].loudness < track[j + 1].loudness ||
                pilihFitur == 7 && track[j].speechiness < track[j + 1].speechiness ||
                pilihFitur == 8 && track[j].tempo < track[j + 1].tempo)
            {
                tracks temp = track[j];
                track[j] = track[j + 1];
                track[j + 1] = temp;
            }
        }
    }
}

void outputOpsiSatu(tracks track[], int pembatas, int pilihFitur)
{
    for (int i = 0; i < pembatas; i++)
    {
        cout << setw(10) << track[i].trackName << setw(15) << track[i].artistName << setw(10) << (pilihFitur == 1 ? track[i].accousticness : (pilihFitur == 2 ? track[i].danceability : (pilihFitur == 3 ? track[i].energy : (pilihFitur == 4 ? track[i].instrumentalness : (pilihFitur == 5 ? track[i].liveness : (pilihFitur == 6 ? track[i].loudness : (pilihFitur == 7 ? track[i].speechiness : track[i].tempo))))))) << endl;

        if (i == pembatas - 1)
        {
            cout << endl;
        }
    }
}

float opsiDua(tracks track[], int pembatas, int pilihFitur)
{
    float jumlah = 0;

    for (int i = 0; i < pembatas; i++)
    {
        (pilihFitur == 1 ? jumlah += track[i].accousticness : (pilihFitur == 2 ? jumlah += track[i].danceability : (pilihFitur == 3 ? jumlah += track[i].energy : (pilihFitur == 4 ? jumlah += track[i].instrumentalness : (pilihFitur == 5 ? jumlah += track[i].liveness : (pilihFitur == 6 ? jumlah += track[i].loudness : (pilihFitur == 7 ? jumlah += track[i].speechiness : jumlah += track[i].tempo)))))));
    }

    return jumlah / pembatas;
}

float opsiTiga(tracks track[], int pembatas, int pilihFitur)
{
    float jumlah = 0;
    for (int i = 0; i < pembatas; i++)
    {
    }
    jumlah /= pembatas;

    float total = 0;
    for (int i = 0; i < pembatas; i++)
    {
        float difference;
        (pilihFitur == 1 ? difference = track[i].accousticness - jumlah : (pilihFitur == 2 ? difference = track[i].danceability - jumlah : (pilihFitur == 3 ? difference = track[i].energy - jumlah : (pilihFitur == 4 ? difference = track[i].instrumentalness - jumlah : (pilihFitur == 5 ? difference = track[i].liveness - jumlah : (pilihFitur == 6 ? difference = track[i].loudness - jumlah : (pilihFitur == 7 ? difference = track[i].speechiness - jumlah : difference = track[i].tempo)))))));
        total += difference * difference;
    }

    return total / pembatas;
}

int main()
{
    const int max = 999;
    int pilihOpsi, pilihFitur, pembatas = 0;
    string buang;
    tracks track[max];

    header();

    // ... (rest of the code remains the same)

    do
    {
        fitur(pilihFitur);

        if (pilihFitur == 9)
        {
            break; // Exit the loop if the user chooses to exit
        }

        opsi(pilihOpsi);

        if (pilihOpsi == 9)
        {
            continue; // Skip the rest of the loop and start from the beginning
        }

        switch (pilihOpsi)
        {
        case 1:
            opsiSatu(track, pembatas, pilihFitur);
            outputOpsiSatu(track, pembatas, pilihFitur);
            break;
        case 2:
            cout << "Rata-rata: " << opsiDua(track, pembatas, pilihFitur) << endl;
            break;
        case 3:
            cout << "Standar deviasi: " << opsiTiga(track, pembatas, pilihFitur) << endl;
            break;
        }

    } while (true); // Infinite loop until the user chooses to exit

    return 0;
}
