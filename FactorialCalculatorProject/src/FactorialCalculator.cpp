#include "FactorialCalculator.h"

unsigned long long FactorialCalculator::factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Факториал не определен для отрицательных чисел.");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

std::vector<unsigned long long> FactorialCalculator::first_n_factorials(int n) {
    if (n < 1) {
        throw std::invalid_argument("n должно быть натуральным числом больше 0.");
    }
    std::vector<unsigned long long> factorials;
    for (int i = 1; i <= n; ++i) {
        factorials.push_back(factorial(i));
    }
    return factorials;
}
