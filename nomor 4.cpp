#include <iostream>
#include <cmath>
#include <limits>

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
