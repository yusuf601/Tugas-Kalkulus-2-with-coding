#include <iostream>
#include <cmath>
#include <limits>

bool is_in_domain_ln(double x) {
    return (x > -1); // Domain fungsi ln(x+1) adalah x > -1
}

int main() {
    double x;
    std::cout << "Masukkan nilai x: ";
    std::cin >> x;

    if (is_in_domain_ln(x)) {
        double y = log(x + 1);
        std::cout << "Fungsi ln(x+1) pada x = " << x << " adalah: " << y << std::endl;
        std::cout << "Domain: x ∈ (-1, ∞)" << std::endl;
        std::cout << "Range: y ∈ (-∞, ∞)" << std::endl;
    } else {
        std::cout << "x berada di luar domain. Nilai harus lebih besar dari -1." << std::endl;
    }

    return 0;
}
