#include <iostream>
#include <cstdlib>

using namespace std;

void Addition(int a, int b);
void Subtraction(int a, int b);
void Division(int a, int b);
void Multiplication(int a, int b);
int Power(int base, int exponent);

int main() {
    int choice, a, b, number, exp;

    while (true) {
        cout << "\nCalculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        system("cls");

        if (choice == 6) {
            cout << "Exiting the calculator." << endl;
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter two integers: ";
                cin >> a >> b;
                Addition(a, b);
                break;
            case 2:
                cout << "Enter two integers: ";
                cin >> a >> b;
                Subtraction(a, b);
                break;
            case 3:
                cout << "Enter two integers: ";
                cin >> a >> b;
                Multiplication(a, b);
                break;
            case 4:
                cout << "Enter two integers: ";
                cin >> a >> b;
                Division(a, b);
                break;
            case 5:
                cout << "Enter the base and exponent: ";
                cin >> number >> exp;
                cout << "Result of Power: " << Power(number, exp) << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        system("pause");
        system("cls");
    }

    return 0;
}

void Addition(int a, int b) {
    cout << "Result of Addition: " << (a + b) << endl;
}

void Subtraction(int a, int b) {
    cout << "Result of Subtraction: " << (a - b) << endl;
}

void Division(int a, int b) {
    if (b == 0) {
        cout << "Division by zero is not allowed." << endl;
    } else {
        cout << "Result of Division: " << (a / b) << endl;
    }
}


void Multiplication(int a, int b) {
    cout << "Result of Multiplication: " << (a * b) << endl;
}

int Power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
