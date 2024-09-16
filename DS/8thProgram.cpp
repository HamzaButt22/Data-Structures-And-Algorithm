#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the number of integers: ";
    cin >> size;

    int* array = new int[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int sumOdd = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % 2 != 0) {
            sumOdd += array[i];
        }
    }

    cout << "Sum of odd integers: " << sumOdd << endl;

    delete[] array;

    return 0;
}
