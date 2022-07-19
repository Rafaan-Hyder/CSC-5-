/*
 * File:   Lab assignment 3
 * Author: Rafaan Hyder
 *
 * Created on June 30, 2022, 10:16 PM
 * Purpose: C++ Template - To be used in all future assignments.
 */

//System Libraries
#include <iostream>
using namespace std; 

int main(int argc, char** argv[]) {
    
    float totalprice;
    float salestax = 0.08;
    float comprofit;
    float y = 0.065;
    float taxes = .674;
    float gallon;
    float x;
    float govt;
    
    cout<<"How much did you gas cost per gallon?"<<endl;
    cin>>gallon;
    
    x = gallon + taxes;
    totalprice = x + (x * salestax);
    comprofit = totalprice * y;
    govt = taxes + (x * salestax);
    
    cout<<"The amount of money the gas companies proft: $"<<comprofit<<endl;
    cout<<"The amount of money the government makes of the taxes: $"<<govt<<endl;
    return 0;
}

