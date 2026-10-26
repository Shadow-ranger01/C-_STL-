#include <iostream>
#include <numeric> // Required for std::gcd and std::lcm

int main() {
    long long a = 24;
    long long b = 36;

    // Calculate GCD
    long long result_gcd = std::gcd(a, b);
    
    // Calculate LCM
    long long result_lcm = std::lcm(a, b);

    std::cout << "GCD of " << a << " and " << b << " is: " << result_gcd << "\n";
    std::cout << "LCM of " << a << " and " << b << " is: " << result_lcm << "\n";

    return 0;
}
