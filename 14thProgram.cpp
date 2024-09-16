#include <iostream>
using namespace std;

int main() {
    int size, item, index = -1;

    cout << "Enter size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the item to search for: ";
    cin >> item;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == item) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Item found at index " << index << " (position " << index + 1 << ")." << endl;
    } else {
        cout << "Item not found in the array." << endl;
    }

    delete[] arr;

    return 0;
}
