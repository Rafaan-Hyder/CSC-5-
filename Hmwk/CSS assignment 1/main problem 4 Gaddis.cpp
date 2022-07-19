/*
 * File:   problem 5 Gaddis
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
    
    float x = 88.67;
    float y = 0.0675;
    float z = 0.2;
    float total1;
    float total2;
    
    total1= x + (x * y);
    total2= total1 + (total1 * z);
    
    cout<<"Meal cost: $"<<x<<endl;
    cout<<"Tax amount: $"<<(x * y)<<endl;
    cout<<"Tip amount: $"<<(total1 * z)<<endl;
    cout<<"Total bill: $"<<total2<<endl;
    
    return 0;
    
}