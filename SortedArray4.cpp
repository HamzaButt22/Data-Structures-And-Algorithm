#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int target) {
    int start=0, ending=size-1, result=-1;

    while (start<=ending) {
        int mid=(start+ending)/2;

        if (arr[mid]==target) {
            result=mid;
            ending=mid-1;
        } else if (arr[mid]<target) {
            start=mid+1;
        } else {
            ending=mid-1;
        }
    }

    return result;
}

int findLastOccurrence(int arr[], int size, int target) {
    int start=0, ending=size-1, result=-1;

    while (start<=ending) {
        int mid=(start+ending)/2;

        if (arr[mid]==target) {
            result=mid;
            start=mid+1;
        } else if (arr[mid]<target) {
            start=mid+1;
        } else {
            ending=mid-1;
        }
    }

    return result;
}

int countOccurrences(int arr[], int size, int target) {
    int firstIndex=findFirstOccurrence(arr, size, target);
    if (firstIndex==-1) {
        return 0;
    }

    int lastIndex=findLastOccurrence(arr, size, target);

    return lastIndex-firstIndex+1;
}

void sortArray(int arr[], int size) {
    for (int i=0; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            if (arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main() {
    int size, target;

    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the values for the array:"<<endl;
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }

    sortArray(arr, size);

    cout<<"Sorted array: ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter target value: ";
    cin>>target;

    int occurrences=countOccurrences(arr, size, target);

    if (occurrences>0) {
        cout<<"The target "<<target<<" occurs "<<occurrences<<" times in the array."<<endl;
    } else {
        cout<<"Target "<<target<<" not found in the array."<<endl;
    }

    return 0;
}
