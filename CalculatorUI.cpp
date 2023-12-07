// CalculatorUI.cpp
#include "CalculatorUI.h"
#include <iostream>

CalculatorUI::CalculatorUI(CalculatorEngine& engine) : calculatorEngine(engine) {}

void CalculatorUI::start() {
    while (true) {
        std::cout << "Enter operation (+, -, *, /) or 'exit' to quit: ";
        std::string operation;
        std::cin >> operation;

        if (operation == "exit") {
            std::cout << "Calculator is exiting. Goodbye!" << std::endl;
            break;
        }

        try {
            std::cout << "Enter first number: ";
            double num1;
            std::cin >> num1;

            std::cout << "Enter second number: ";
            double num2;
            std::cin >> num2;

            double result = 0;

            if (operation == "+") {
                result = calculatorEngine.add(num1, num2);
            } else if (operation == "-") {
                result = calculatorEngine.subtract(num1, num2);
            } else if (operation == "*") {
                result = calculatorEngine.multiply(num1, num2);
            } else if (operation == "/") {
                result = calculatorEngine.divide(num1, num2);
            } else {
                throw "Invalid operation";
            }

            std::cout << "Result: " << result << std::endl;
        } catch (const char* msg) {
            std::cerr << "Error: " << msg << std::endl;
        }
    }
}
