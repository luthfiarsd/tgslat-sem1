#include <iostream>

int main() {
    int n;
    std::cout << "Masukkan tinggi layang-layang (bilangan ganjil): ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Tinggi harus merupakan bilangan ganjil." << std::endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < n / 2) {
                if (j >= n / 2 - i && j <= n / 2 + i) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            } else {
                if (j >= i - n / 2 && j <= n - 1 - (i - n / 2)) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}