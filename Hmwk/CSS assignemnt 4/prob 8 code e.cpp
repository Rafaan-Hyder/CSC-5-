#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
float inflationMethod(float previousCost,float currentCost);
int main()
{
   float previousCost,currentCost,rate;
   char option;
   cout<<setprecision(4);
   do
   {
   cout<<"Enter current price:"<<endl;
   cin>>currentCost;
   cout<<"Enter year ago price:"<<endl;;
   cin>>previousCost;
   rate = inflationMethod(currentCost,previousCost);
   cout<<"Inflation rate:"<<rate*100<<"%"<<endl;
   cout<<"\nAgain:\n";
   cout<<endl;
   cin>>option;
   
   }while((option=='Y')||(option=='y'));
}
float inflationMethod(float previousCost,float currentCost)
{  
    return ((previousCost - currentCost)/currentCost);
}