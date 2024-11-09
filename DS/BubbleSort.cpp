#include <iostream>
using namespace std;
int main() {
    int size = 9;
    int arr[size];

    cout<<"Enter values for unsorted array:"<<endl;
    for(int i=0; i<size; i++) {
      cin>>arr[i];
    }

    cout<<"Unsorted Array:"<<endl;
    for(int i=0; i<size; i++)
      cout<<arr[i]<<"\t";
      cout<<" "<<endl;

      cout<<"Bubble Sort in Ascending Order"<<endl;

      int temp;
      for(int i=0; i<size-1; i++) {
         bool flag=false;

        for(int j=0; j<size-i-1; j++) {
           if(arr[j]>arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            flag=true;
           }
      }

      if(!flag) {
        break;
      }

      }
      cout<<"Sorted Array after Bubble Sort:"<<endl;
      for(int i=0; i<size; i++) {
        cout<<arr[i]<<"\t";
      }
      cout<<endl;
      return 0;
}
