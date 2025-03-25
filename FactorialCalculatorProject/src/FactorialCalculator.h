#ifndef FACTORIALCALCULATOR_H
#define FACTORIALCALCULATOR_H

#include <vector>
#include <stdexcept>

class FactorialCalculator {
public:
    // Вычисляет факториал числа n
    static unsigned long long factorial(int n);

    // Возвращает вектор первых n факториалов
    static std::vector<unsigned long long> first_n_factorials(int n);
};

#endif // FACTORIALCALCULATOR_H
