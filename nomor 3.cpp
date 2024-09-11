#include <iostream>
#include <cmath>
#include <limits>
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
