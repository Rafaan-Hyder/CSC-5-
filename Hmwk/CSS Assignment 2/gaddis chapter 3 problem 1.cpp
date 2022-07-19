#include <iostream>

using namespace std;

int main()
{
   float x;
   float y;
   
   
   cout<<"how many gallons can your car fill up?"<<endl;
   cin>>x;
   
   cout<<"how many miles can the car drive on full tank?"<<endl;
   cin>>y;
   
   float z = (y / x);
   
   cout<<"your car runs "<<z<<"miles per gallon"<<endl;

    return 0;
}