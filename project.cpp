#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b == 0) {
            throw invalid_argument("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {
    Calculator calculator;
    int a, b;
    char operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    try {
        switch (operation) {
            case '+':
                cout << "Result: " << calculator.add(a, b) << endl;
                break;
            case '-':
                cout << "Result: " << calculator.subtract(a, b) << endl;
                break;
            case '*':
                cout << "Result: " << calculator.multiply(a, b) << endl;
                break;
            case '/':
                cout << "Result: " << calculator.divide(a, b) << endl;
                break;
            default:
                cout << "Invalid operation." << endl;
        }
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
