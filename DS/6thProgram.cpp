#include<iostream>
using namespace std;
int main()
{
   const int month=12;
   double arr[month], TotalRain=0, AvgRain, maxRain, minRain;
   int maxMonth=1, minMonth=1;

   for(int i=0; i<month; i++)
   {
       cout<<"Enter total rainfall for month "<<i+1<<": ";
       cin>>arr[i];
   }

   maxRain=minRain=arr[0];

   for(int i=0; i<month; i++)
   {
       TotalRain+=arr[i];

       if(maxRain<arr[i])
      {
          maxRain=arr[i];
          maxMonth=i+1;
      }

      if(minRain>arr[i])
      {
          minRain=arr[i];
          minMonth=i+1;
      }
   }

   AvgRain=TotalRain/month;

   cout<<endl;
   cout<<"Total RainFall Over A Year: "<<TotalRain<<" units"<<endl;
   cout<<"Average Monthly RainFall: "<<AvgRain<<" units"<<endl;
   cout<<endl;
   cout<<"Month With The Highest RainFall: "<<maxMonth<<" ("<<maxRain<<" units)"<<endl;
   cout<<"Month With The Lowest RainFall: "<<minMonth<<" ("<<minRain<<" units)"<<endl;

   return 0;
}
