#include <iostream>
#include <cmath>

bool is_in_domain_fraction(double x) {
    // Mengecek jika sqrt dari (x-1)(x+1) tidak menyebabkan masalah matematika
    return (x > 1);
}

int main() {
    double x;
    std::cout << "Masukkan nilai x: ";
    std::cin >> x;

    if (is_in_domain_fraction(x)) {
        double y = (x - 1) / sqrt((x - 1) * (x + 1));
        std::cout << "Fungsi (x-1)/sqrt((x-1)(x+1)) pada x = " << x << " adalah: " << y << std::endl;
        std::cout << "Domain: x ∈ (1, ∞)" << std::endl;
        std::cout << "Range: y ∈ ℝ (bernilai real)" << std::endl;
    } else {
        std::cout << "x berada di luar domain. Nilai harus lebih besar dari 1." << std::endl;
    }

    return 0;
}
