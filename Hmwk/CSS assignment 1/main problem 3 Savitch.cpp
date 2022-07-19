/*
 * File:   problem 3 Savitch
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
    //initialize the random number seed
    
    //declare variables
    int x,y,z;
    int total;
    int num1=25;
    int num2=10;
    int num3=5;
    //initialize variables
    cout<<"How many quarters?"<<endl;
    cin>>x;
    cout<<"How many dimes?"<<endl;
    cin>>y;
    cout<<"How many nickels?"<<endl;
    cin>>z;
    //map inputs to outputs -> The process
    total=(x * num1) + (y * num2) + (z * num3); 
    //display the results
    cout<<total<< " cents"<<endl;
    //exit stage right
    
    return 0;
}