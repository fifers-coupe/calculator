# Makefile
all: calculator

calculator: main.cpp CalculatorEngine.cpp CalculatorUI.cpp
    g++ -o calculator main.cpp CalculatorEngine.cpp CalculatorUI.cpp

clean:
    rm -f calculator
