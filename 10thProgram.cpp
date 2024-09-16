#include <iostream>

using namespace std;

int main() {
    int a, b;
    int* ptrA = &a;
    int* ptrB = &b;

    cout << "Enter an integer value for a: ";
    cin >> a;
    cout << "Enter an integer value for b: ";
    cin >> b;

    cout << "Value of a (using pointer): " << *ptrA << endl;
    cout << "Value of b (using pointer): " << *ptrB << endl;

    cout << "Address of a: " << ptrA << endl;
    cout << "Address of b: " << ptrB << endl;

    return 0;
}
