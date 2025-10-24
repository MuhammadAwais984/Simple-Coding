#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
   if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
    }
    else {
   
        cout << "Invalid operation entered." << endl;
    }

    return 0;
}