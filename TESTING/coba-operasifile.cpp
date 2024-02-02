/*
Nama Program : Save and Load
Nama         : Robby Azwan Saputra
NPM          : 140810230008
Tanggal Buat : 21 November 2023
Deskripsi    : Buatlah sebuah game quiz sederhana dengan fungsi save dan load.
                - Save bisa dilakukan kapanpun saat game dimulai
                - Load akan memulihkan keadaan game saat di save
                - Save dan Load menggunakan file
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void header()
{
    cout << "============================================" << endl;
    cout << "AKU CINTA KALKULUS, MARI KITA KUIS KALKULUS!" << endl;
    cout << "============================================" << endl;
}

void notes()
{
    cout << "\nNOTES: ";
    cout << "\n#QUIZ TERDIRI DARI 10 SOAL";
    cout << "\n#SETIAP JAWABAN BENAR MENDAPAT 10 SCORE";
    cout << "\n#PESERTA YANG MENDAPATKAN SCORE 100 AKAN MENDAPATKAN HADIAH";
    cout << "\n#PESERTA DAPAT MENGAKSES QUIZ DI LAIN WAKTU DENGAN CARA KETIK 2 ATAU LOAD SAAT MASUK PROGRAM QUIZ" << endl;
}

void start()
{
    cout << "\n1. NEW GAME \n2. LOAD GAME \n3. KELUAR" << endl;
}

void save(int soal, int score)
{
    ofstream out_file;
    out_file.open("save.txt");
    out_file << soal << endl;
    out_file << score << endl;
    out_file.close();
}

void load(int &soal, int &score)
{
    ifstream in_file;
    in_file.open("save.txt");
    in_file >> soal;
    in_file >> score;
    in_file.close();
}

int main()
{
    int soal = 1;
    char jawaban;
    int score = 0;
    int pilihan;

    header();
    notes();
    start();
    cout << "=> ";
    cin >> pilihan;
    if (pilihan == 2)
    {
        load(soal, score);
    }

    while (soal <= 10)
    {
        if (pilihan == 3)
        {
            cout << "Keluar dari program...";
            break;
        }
        if (soal == 1)
        {
            cout << "SOAL 1" << endl;
            cout << "\n1. Hewan apa yang termasuk herbivora? \nA. Kucing \nB. Sapi \nC. Singa \nD. Anjing";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'B' || jawaban == 'b')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 2)
        {
            cout << endl
                 << "SOAL 2" << endl;
            cout << "Hewan apa yang berkaki empat? \nA. Serigala \nB. Sapi \nC. Kucing \nD. Semua jawaban benar";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'D' || jawaban == 'd')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 3)
        {
            cout << endl
                 << "SOAL 3" << endl;
            cout << "Hewan apa yang bertelur? \nA. Ayam \nB. Sapi \nC. Gajah \nD. Harimau";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'A' || jawaban == 'a')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 4)
        {
            cout << endl
                 << "SOAL 4" << endl;
            cout << "Hewan apa yang memiliki sayap? \nA. Kelinci \nB. Kucing \nC. Burung \nD. Semut";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'C' || jawaban == 'c')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 5)
        {
            cout << endl
                 << "SOAL 5" << endl;
            cout << "Manusia bernafas menggunakan? \nA. Oksigen \nB. Monokarbon \nC. Uranium \nD. Air";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'A' || jawaban == 'a')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                soal++;
                cout << "Score anda : " << score << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 6)
        {
            cout << endl
                 << "SOAL 6" << endl;
            cout << "Spongebob berwarna apa? \nA. Hijau \nB. Kuning \nC. Biru \nD. Pink";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'B' || jawaban == 'b')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 7)
        {
            cout << endl
                 << "SOAL 7" << endl;
            cout << "Negara dengan bendera Merah Putih adalah? \nA. Indonesia \nB. Russia \nC. Yunani \nD. China";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'A' || jawaban == 'a')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 8)
        {
            cout << endl
                 << "SOAL 8" << endl;
            cout << "Gunung tertinggi di dunia adalah? \nA. Everest \nB. Merapi \nC. Fuji \nD. Kidul";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'A' || jawaban == 'a')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 9)
        {
            cout << endl
                 << "SOAL 9" << endl;
            cout << "Odading mang Oleh rasanya seperti? \nA. Ikan \nB. Sate Padang \nC. Ironmen \nD. Ayam KFC";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'C' || jawaban == 'c')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                soal++;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
            }
        }
        if (soal == 10)
        {
            cout << endl
                 << "SOAL 10" << endl;
            cout << "Siapa robot berwarna merah dan bisa terbang di film Marvel? \nA. Hulk \nB. Iron-Man \nC. Wanda \nD. Spiderman";
            cout << "\nJawab: ";
            cin >> jawaban;
            if (jawaban == '0')
            {
                cout << "Anda keluar dari quiz!" << endl;
                save(soal, score);
                break;
            }
            if (jawaban == 'B' || jawaban == 'b')
            {
                score += 10;
                cout << "Jawaban anda benar" << endl;
                cout << "Score anda : " << score << endl;
                save(soal, score);
                if (score == 100)
                {
                    cout << "\nSELAMAT ANDA MENDAPATKAN HADIAH LAPTOP GAMING ACER PREDATOR SILAHKAN AMBIL SENDIRI DI MANGGA DUA!!!";
                }
                cout << "\n\nTERIMA KASIH TELAH BERMAIN DI QUIZ INI! \nSEMOGA HARIMU SELALU MENYENANGKAN!" << endl;
            }
            else
            {
                cout << "Jawaban anda salah" << endl;
                cout << "Score anda : " << score << endl;
                cout << "Menyimpan game..." << endl;
                save(soal, score);
                cout << "\nTERIMA KASIH TELAH BERMAIN DI QUIZ INI! \nSEMOGA HARIMU SELALU MENYENANGKAN!" << endl;
            }
        }
        break;
    }

    return 0;
}