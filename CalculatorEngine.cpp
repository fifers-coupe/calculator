// CalculatorEngine.cpp
#include "CalculatorEngine.h"

double CalculatorEngine::add(double num1, double num2) {
    return num1 + num2;
}

double CalculatorEngine::subtract(double num1, double num2) {
    return num1 - num2;
}

double CalculatorEngine::multiply(double num1, double num2) {
    return num1 * num2;
}

double CalculatorEngine::divide(double num1, double num2) {
    if (num2 == 0) {
        throw "Cannot divide by zero";
    }
    return num1 / num2;
}
