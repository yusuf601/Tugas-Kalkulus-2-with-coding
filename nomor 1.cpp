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
