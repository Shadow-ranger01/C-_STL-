#include <iostream>
#include <cmath> // Required for std::pow, std::log, std::log2, std::log10

int main() {
    // --- 1. Exponentiation ---
    double base = 2.0;
    double exponent = 3.0;
    double result_pow = std::pow(base, exponent); // 2^3
    std::cout << base << " raised to the power of " << exponent << " is: " << result_pow << "\n";

    // --- 2. Logarithms ---
    double val = 8.0;

    std::cout << "Natural log (ln) of " << val << " is: " << std::log(val) << "\n";
    std::cout << "Base-2 log of " << val << " is: " << std::log2(val) << "\n";
    std::cout << "Base-10 log of 100 is: " << std::log10(100.0) << "\n";

    // --- 3. Custom Base Logarithm (e.g., log_3(81)) ---
    double x = 81.0;
    double custom_base = 3.0;
    double log_custom = std::log(x) / std::log(custom_base);
    std::cout << "Log base " << custom_base << " of " << x << " is: " << log_custom << "\n";

    return 0;
}
