#include<iostream>
using namespace std;

int partition(int T[], int first, int last)
{
    int pivot, temp;
    int bottom, top, cutPoint;
    pivot = T[first]; // First element as pivot
    bottom = first;
    top = last;

    while (true) {
        while (T[top] < pivot) {
            // Find a larger value than pivot from the top
            top--;
        }
        while (T[bottom] > pivot) {
            // Find a smaller value than pivot from the bottom
            bottom++;
        }
        if (bottom < top) {
            // Swap elements at bottom and top
            temp = T[bottom];
            T[bottom] = T[top];
            T[top] = temp;
        } else {
            // Pivot is now in its correct position
            cutPoint = top;
            break;
        }
    }
    return cutPoint;
}

void quickSort(int T[], int first, int last)
{
    int cut;
    if (first < last) {
        cut = partition(T, first, last); // Partitioning step
        quickSort(T, first, cut);       // Sort left part
        quickSort(T, cut + 1, last);    // Sort right part
    }
}

int main()
{
    int arr[7] = {5, 15, 7, 2, 4, 1, 8};
    int n = 7;
    cout<<"Unsorted array is:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout<<endl;
    quickSort(arr, 0, n - 1);
    cout << "The sorted array in descending order is:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    return 0;
}
