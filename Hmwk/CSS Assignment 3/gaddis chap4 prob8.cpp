/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
string x;
  
 
string y;
  
 
string z;
  
 
cout << "Sorting Names" << endl;
  
cout << "Input 3 names" << endl;
  
 
cin >> x;
  
 
cin >> y;
  
 
cin >> z;
  
 
 
if (x < y && y < z)
    
    {
      
 
cout << x << endl;
      
cout << y << endl;
      
cout << z;
    
 
}
  
 
 
if (y < x && x < z)
    
    {
      
 
cout << y << endl;
      
cout << x << endl;
      
cout << z;
    
 
}
  
 
 
if (z < x && x < y)
    
    {
      
 
cout << z << endl;
      
cout << x << endl;
      
cout << y;
    
 
}
  
 
 
if (x < z && z < y)
    
    {
      
 
cout << x << endl;
      
cout << z << endl;
      
cout << y;
    
 
}
  
 
 
if (y < z && z < x)
    
    {
      
 
cout << y << endl;
      
cout << z << endl;
      
cout << x;
    
 
}
  
 
 
if (z < y && y < x)
    
    {
      
 
cout << z << endl;
      
cout << y << endl;
      
cout << x;
    
 
    }

 
 
 
if (z < y && y < x)
  
 
  {
    
 
 
cout << z << endl;
    
 
cout << y << endl;
    
 
cout << x;
  
 
 
}


    return 0;
}
