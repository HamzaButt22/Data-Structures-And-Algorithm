#include<iostream>
using namespace std;
void printArray(int arr[],int start, int ending) {
    cout<<"Active items: ";
    for(int i=start; i<=ending; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size,target,temp=0;

    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter values for the array to get sorted: "<<endl;
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The array after sorting: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter target value: ";
    cin>>target;

    int start=0, ending=size-1, mid;
    bool found=false;

    while(start<=ending){
            mid=(start+ending)/2;

    printArray(arr, start, ending);
    if(arr[mid]==target){
        found=true;
        break;
    }
    else if(arr[mid]<target){
        start=mid+1;
    }
    else {
        ending=mid-1;
    }
    }

    if(found){
        cout<<"Target "<<target<<" found in array"<<endl;
    }
    else {
        cout<<"Target not found"<<endl;
    }
    return 0;
}
