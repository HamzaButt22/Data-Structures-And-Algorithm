#include <iostream>
using namespace std;
int main() {
    int size = 5;
    int arr[size];

    cout<<"Enter values for unsorted array:"<<endl;
    for(int i=0; i<size; i++) {
      cin>>arr[i];
    }

    cout<<"Unsorted Array:"<<endl;
    for(int i=0; i<size; i++)
      cout<<arr[i]<<"\t";
      cout<<" "<<endl;

      cout<<"Insertion Sort in Descending Order"<<endl;
      for(int i=0; i<size; i++) {
      int temp=arr[i];
      int j=i-1;

      while(j>=0 && arr[j]<temp) {
        arr[j+1]=arr[j];
        j--;
      }
      arr[j+1]=temp;
      }
      cout<<"Sorted Array after insertion Sort:"<<endl;
      for(int i=0; i<size; i++) {
        cout<<arr[i]<<"\t";
      }
      return 0;
}
