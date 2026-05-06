#include <iostream>
using namespace std;

int main() {
    try {
        int a, b;
        char op;

        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> b;

        if (op != '+' && op != '-' && op != '*' && op != '/')
            throw op;

        if (op == '/' && b == 0)
            throw 1.1;

        if (op == '+')
            cout << "Result = " << a + b << endl;
        else if (op == '-')
            cout << "Result = " << a - b << endl;
        else if (op == '*')
            cout << "Result = " << a * b << endl;
        else
            cout << "Result = " << a / b << endl;
    }
    catch (int errorCode) {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    catch (char wrongOperator) {
        cout << "Error: Invalid operator entered: " << wrongOperator << endl;
    }

    return 0;
}