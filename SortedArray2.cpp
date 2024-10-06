#include<iostream>
using namespace std;

int findFirstOccurrence(int arr[],int size, int target) {
    int start=0,ending=size-1,result=-1;
    while(start<=ending){
        int mid=(start+ending)/2;

        if(arr[mid]==target){
            result=mid;
            ending=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else {
            ending=mid-1;
        }
    }
    return result;
}

int main(){
    int size,target;

    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter values for the array: "<<endl;
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    cout<<"Enter target value: ";
    cin>>target;

    int index=findFirstOccurrence(arr,size,target);

    if(index!=-1){
        cout<<"The first occurrence of target "<<target<<" is at index "<<index<<endl;
    }
    else {
        cout<<"Target "<<target<<" not found"<<endl;
    }
    return 0;
}
