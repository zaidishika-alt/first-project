#include <iostream>
using namespace std;

class Calculator {
public:
    void add(double a, double b) {
        cout << "Addition: " << (a + b) << endl;
    }

    void subtract(double a, double b) {
        cout << "Subtraction: " << (a - b) << endl;
    }

    void multiply(double a, double b) {
        cout << "Multiplication: " << (a * b) << endl;
    }

    void divide(double a, double b) {
        if (b != 0)
            cout << "Division: " << (a / b) << endl;
        else
            cout << "Error! Division by zero." << endl;
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+': calc.add(num1, num2); break;
        case '-': calc.subtract(num1, num2); break;
        case '*': calc.multiply(num1, num2); break;
        case '/': calc.divide(num1, num2); break;
        default: cout << "Invalid operator!" << endl;
    }

    return 0;
}
