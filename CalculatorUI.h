// CalculatorUI.h
#pragma once
#include "CalculatorEngine.h"

class CalculatorUI {
private:
    CalculatorEngine calculatorEngine;

public:
    CalculatorUI(CalculatorEngine& engine);
    void start();
};
