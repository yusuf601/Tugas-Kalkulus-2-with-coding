#include <iostream>
#include <cmath>
#include <limits>

bool is_in_domain_sqrt(double x) {
    return (x >= 1); // Domain: x >= 1
}

int main_sqrt() {
    double x;
    std::cout << "Masukkan nilai x untuk sqrt((x-1)(x+1)): ";
    std::cin >> x;

    if (is_in_domain_sqrt(x)) {
        double y = sqrt((x - 1) * (x + 1));
        std::cout << "Fungsi sqrt((x-1)(x+1)) pada x = " << x << " adalah: " << y << std::endl;
        std::cout << "Domain: x ∈ [1, ∞)" << std::endl;
        std::cout << "Range: y ∈ [0, ∞)" << std::endl;
    } else {
        std::cout << "x berada di luar domain. Nilai harus lebih besar atau sama dengan 1." << std::endl;
    }

    return 0;
}
bool is_in_domain_fraction(double x) {
    return (x != -2); // Domain: x ≠ -2
}

int main_fraction() {
    double x;
    std::cout << "Masukkan nilai x untuk x / (x+2): ";
    std::cin >> x;

    if (is_in_domain_fraction(x)) {
        double y = x / (x + 2);
        std::cout << "Fungsi x / (x+2) pada x = " << x << " adalah: " << y << std::endl;
        std::cout << "Domain: x ∈ ℝ, x ≠ -2" << std::endl;
        std::cout << "Range: y ∈ ℝ, kecuali hasil saat x=-2 (tak terdefinisi)" << std::endl;
    } else {
        std::cout << "x berada di luar domain. Nilai x tidak boleh sama dengan -2." << std::endl;
    }

    return 0;
}
int main_sin() {
    double x;
    std::cout << "Masukkan nilai x untuk 2x*sin(x): ";
    std::cin >> x;

    double y = 2 * x * sin(x);
    std::cout << "Fungsi 2x*sin(x) pada x = " << x << " adalah: " << y << std::endl;
    std::cout << "Domain: x ∈ ℝ" << std::endl;
    std::cout << "Range: y ∈ ℝ (Rentang tergantung pada x)" << std::endl;

    return 0;
}

int main_exp() {
    double x;
    std::cout << "Masukkan nilai x untuk e^x + 1: ";
    std::cin >> x;

    double y = exp(x) + 1;
    std::cout << "Fungsi e^x + 1 pada x = " << x << " adalah: " << y << std::endl;
    std::cout << "Domain: x ∈ ℝ" << std::endl;
    std::cout << "Range: y ∈ (1, ∞)" << std::endl;

    return 0;
}
int main() {
    int choice;
    std::cout << "Pilih fungsi yang ingin dihitung:\n";
    std::cout << "1. sqrt((x-1)(x+1))\n";
    std::cout << "2. x / (x+2)\n";
    std::cout << "3. 2x*sin(x)\n";
    std::cout << "4. e^x + 1\n";
    std::cout << "Masukkan pilihan (1-4): ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            main_sqrt();
            break;
        case 2:
            main_fraction();
            break;
        case 3:
            main_sin();
            break;
        case 4:
            main_exp();
            break;
        default:
            std::cout << "Pilihan tidak valid." << std::endl;
    }

    return 0;
}
