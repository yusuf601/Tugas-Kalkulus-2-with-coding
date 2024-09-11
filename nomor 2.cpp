#include <iostream>
#include <cmath>
#include <limits>

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
