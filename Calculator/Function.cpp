#include <iostream> 
using namespace std;

void getInput(char &operation, float &num1, float &num2);
float calculateResult(char operation, float num1, float num2);
void displayResult(float result);

int main() {
    char operation;
    float num1, num2, result;

    getInput(operation, num1, num2);
    result = calculateResult(operation, num1, num2);
    displayResult(result);

    return 0;
}

void getInput(char &operation, float &num1, float &num2) {
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
}

float calculateResult(char operation, float num1, float num2) {
    float result;

    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            result = 0;  
        }
    } else {
        cout << "Error: Invalid operator" << endl;
        result = 0; 
    }

    return result;
}

void displayResult(float result) {
    cout << "Result: " << result << endl;
}
