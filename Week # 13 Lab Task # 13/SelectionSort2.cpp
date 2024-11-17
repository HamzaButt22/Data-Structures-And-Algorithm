#include <iostream>
using namespace std;

// Function to swap the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

// Selection Sort function for descending order
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int max_idx = step; // Assume the current element is the largest
    cout << "\nStep " << step + 1 << ":\n";
    cout << "Starting array: ";
    printArray(array, size);

    // Loop to find the maximum element in the unsorted part
    for (int i = step + 1; i < size; i++) {
      if (array[i] > array[max_idx]) {
        max_idx = i; // Update max_idx if a larger element is found
      }
      cout << "Comparing array[" << i << "]=" << array[i]
           << " with array[" << max_idx << "]=" << array[max_idx] << endl;
    }

    // Swap the found maximum element with the current position
    cout << "Swapping array[" << step << "]=" << array[step]
         << " with array[" << max_idx << "]=" << array[max_idx] << endl;
    swap(&array[max_idx], &array[step]);

    // Print array after the swap
    cout << "Array after swap: ";
    printArray(array, size);
  }
}

int main() {
  int data[] = {20, 12, 10, 15, 2}; // Define the array
  int size = 5; // Array size

  cout << "Unsorted array: ";
  printArray(data, size);

  selectionSort(data, size);

  cout << "\nSorted array in Descending Order: ";
  printArray(data, size);

  return 0;
}
