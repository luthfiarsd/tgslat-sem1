#include <iostream>

int cariIndeksKarakter(const char *string, char karakter)
{
    const char *pointer = string; // Inisialisasi pointer pada awal string

    while (*pointer != '\0')
    {
        if (*pointer == karakter)
        {
            // Karakter ditemukan, kembalikan indeks
            return pointer - string;
        }
        pointer++; // Pindah ke karakter berikutnya dalam string
    }

    // Karakter tidak ditemukan
    return -1;
}

int main()
{
    const char *teks = "ContohString";
    char karakterYangDicari = 'i';

    int indeks = cariIndeksKarakter(teks, karakterYangDicari);

    if (indeks != -1)
    {
        std::cout << "Karakter '" << karakterYangDicari << "' ditemukan pada indeks: " << indeks << std::endl;
    }
    else
    {
        std::cout << "Karakter '" << karakterYangDicari << "' tidak ditemukan dalam string." << std::endl;
    }

    return 0;
}