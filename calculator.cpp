#include <iostream>
#include <stdexcept>

using namespace std;

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        throw runtime_error("Error! Division by zero.");
    }
    return x / y;
}

int main() {
    double num1, num2;
    char operation;
    
    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    try {
        switch (operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                break;
            case '/':
                cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operation." << endl;
        }
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
