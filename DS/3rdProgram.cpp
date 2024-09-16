#include<iostream>
using namespace std;

int main(){
   int add=0, mul=1,row,col,num;
   cout<<"Enter row size of 2D Array: ";
   cin>>row;
   cout<<"Enter column size of 2D Array: ";
   cin>>col;
   int arr[row][col];
   cout<<"Enter values in array: "<<endl;
   for(int i=0; i<row; i++)
   {
     for(int j=0; j<col; j++)
     {
        cin>>arr[i][j];
     }
   }

   for(int i=0; i<row; i++)
   {
     for(int j=0; j<col; j++)
     {
        add+=arr[i][j];
     }
   }

   for(int i=0; i<row; i++)
   {
     for(int j=0; j<col; j++)
     {
        mul=mul*arr[i][j];
     }
   }
   cout<<"Sum of array: "<<add<<"\n";
   cout<<"Mul of array: "<<mul<<"\n";
   num=row*col;
   double avg=add/num;
   cout<<"Average of array: "<<avg;
   return 0;
}
