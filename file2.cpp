#include <iostream>
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
    if (y != 0)
        return x / y;
    else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

int main() {
    int choice;
    double num1, num2;
    
    while (true) {
        cout << "Select operation:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "Enter choice (1/2/3/4): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                    break;
                case 2:
                    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                    break;
                case 3:
                    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                    break;
                case 4:
                    double result = divide(num1, num2);
                    if (result != 0) {
                        cout << num1 << " / " << num2 << " = " << result << endl;
                    }
                    break;
            }

            char next_calculation;
            cout << "Do you want to perform another calculation? (yes/no): ";
            cin >> next_calculation;
            if (next_calculation == 'n' || next_calculation == 'N') {
                break;
            }
        } else {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}
