/*
 * File:   problem 3 Gaddis
 * Author: Rafaan Hyder
 *
 * Created on June 30, 2022, 10:16 PM
 * Purpose: C++ Template - To be used in all future assignments.
 */

//System Libraries
#include <iostream>
using namespace std; 

//User Libraries

//Global Constants
//Mathematical/Physics/conversions/Higher Dimensioned Arrays
//funtion prototype
//execution begins here

int main(int argc, char** argv[]) {
    float x;
    float y = 0.06;
    float total;
    
    cout<<"Enter your amount: "<<endl;
    cin>>x;
    
    total= x + (x * y);
    
    cout<<"total: $"<<total<<endl;
    
    return 0;
}