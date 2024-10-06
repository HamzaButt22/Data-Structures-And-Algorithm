#include <iostream>
using namespace std;

int findLastOccurrence(int arr[], int size, int target) {
    int result = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            result = i;
        }
    }

    return result;
}

int main() {
    int size, target;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    int index = findLastOccurrence(arr, size, target);

    if (index != -1) {
        cout << "The last occurrence of target " << target << " is at index " << index << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
