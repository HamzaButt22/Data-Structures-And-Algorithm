#include<iostream>
using namespace std;
int main()
{
    int max=0;
   int arr[10];

   cout<<"Enter values in array: "<<endl;

   for(int i=0; i<10; i++)
   {
      cout<<i+1<<".\t";
      cin>>arr[i];
   }

   for(int i=0; i<10; i++)
   {
      if(max<arr[i])
      {
          max=arr[i];
      }
   }

   int min=max;

   for(int i=0; i<10; i++)
   {
      if(min>arr[i])
      {
          min=arr[i];
      }
   }
   cout<<"\n";
   cout<<"Largest value in the array is:\t"<<max<<endl;
   cout<<"\n";
   cout<<"Smallest value in the array is:\t"<<min;
   cout<<"\n";

   return 0;
}
