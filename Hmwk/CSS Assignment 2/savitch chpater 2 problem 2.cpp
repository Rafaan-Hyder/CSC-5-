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
   
    float x;
    float y = 0.076;
    float z = (x * y);
    float asalary = x + (x * y);
    float msalary = asalary / 12;
    
    
    cout<<"Input previous annual salary."<<endl;
    cin>>x;
    cout<<"Retroactive pay = $"<<z<<endl;
    cout<<"new annual salary = $"<<asalary<<endl;
    cout<<"New monthly salary = $"<<msalary;
    
    return 0;
}
