// main.cpp
#include "CalculatorEngine.h"
#include "CalculatorUI.h"

int main() {
    CalculatorEngine calculatorEngine;
    CalculatorUI calculatorUI(calculatorEngine);
    calculatorUI.start();

    return 0;
}
