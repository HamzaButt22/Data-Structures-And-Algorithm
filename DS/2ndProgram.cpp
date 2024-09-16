#include<iostream>
using namespace std;
int main()
{
  int size;
  cout<<"Enter size of 2D array: ";
  cin>>size;

  int TwoDarr[size][size];

  cout<<"Enter values in array: "<<endl;
  for(int i=0; i<size; i++)
  {
    for(int j=0; j<size; j++)
    {
       cin>>TwoDarr[i][j];
    }
  }

  for(int i=0; i<size; i++)
  {
    for(int j=0; j<size; j++)
    {
       cout<<TwoDarr[i][j]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
