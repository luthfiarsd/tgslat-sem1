/*
Nama Program : Program_Quiz
Nama         : Dafa Ghani Abdul Rabbani
NPM          : 140810230022
Tanggal Buat : 17 November 2023
Deskripsi    : Buatlah sebuah game quiz sederhana dengan fungsi save dan load.

               - Save bisa dilakukan kapanpun saat game dimulai
               - Load akan memulihkan keadaan game saat di save
               - Save dan Load menggunakan file
*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;

void header(int &pilih){
    cout << "========================================================\n"
         << setw(30) << "QUIZ\n"
         << "Press 1 for new quiz.\n"
         << "Press 2 to load quiz.\n"
         << "========================================================\n"
         << "> "; cin >> pilih; cout << "\n";
    system("cls");
}

int main(){
    int pilih, nilai, n;
    string soal, jawaban, nomor, pilihan;
    bool save = false;
    ifstream in_file;
    ofstream out_file;

    header(pilih);

    switch(pilih){
        case 1 :
        nomor = "1";
        nilai = 0;
        n = 1;
        break;

        case 2 :
        in_file.open("freeform_save.txt");
        in_file >> nomor;
        in_file >> nilai;
        in_file.close();

        in_file.open("freeform_save.txt");
        in_file >> n;
        in_file.close();
        break;
    }

    in_file.open("freeform_soal.txt");

    while(!in_file.eof()){
        getline(in_file, soal);

        if(soal == nomor){
            save = true;
        }

        if(save == true){
            for(int i = 0; i < 5; i++){
                getline(in_file, soal);
                cout << soal << endl;
            }

            getline(in_file, jawaban);
            cout << "==================================\n"
                 << "Press 3 to save progress and exit.\n"
                 << "==================================\n"
                 << "> ";
            cin >> pilihan;

            if(jawaban == pilihan){
                cout << "\nGood job! Your answer is TRUE\n";
                nilai += 20;
                n++;
                cout << "Press ENTER to continue.\n";
                getch();
                system("cls");
                continue;
            }
            else if(pilihan == "3"){
                ofstream out_file;
                out_file.open("freeform_save.txt");
                out_file << n << endl;
                out_file << nilai;
                out_file.close();
                return 0;
            }
            else{
                cout << "\nOopsie! Your answer is FALSE\n";
                n++;
                cout << "Press ENTER to continue.\n";
                getch();
                system("cls");
                continue;
            }
        }
    }

    if(in_file.eof()){
        cout << "============================\n"
             << "Thank you for participating.\n"
             << "Final score: " << nilai << endl;
        cout << "============================\n";
        out_file.open("freeform_save.txt");
        out_file << 1 << endl
                 << 0;
        out_file.close();
    }

    in_file.close();
}