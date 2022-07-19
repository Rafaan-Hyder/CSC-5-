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
    
    int payrate;
    int hours;
    
    
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payrate;
    cin>>hours;
    
    
    int grosspay1 = payrate * hours;
    int x = hours - 40;
    int y = x * payrate;
    int grosspay2 = grosspay1 + y;
    
    if(hours < 40){
        cout<<"Paycheck = $ "<<grosspay1<<".00";
    }
        else{
            cout<<"Paycheck = $ "<<grosspay2<<".00";
        }
    
    return 0;
}