/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    float F,
          C;

    // Ask user Celsius Temp
    cout << "Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin >> F;

    // Calculate Fahrenheit
    C = ((5.0 / 9.0) * (F - 32));

    // Display Fahrenheit
    cout<<F<<".0 Degrees Fahrenheit = "<<C<<".0 Degrees Centigrade";


    return 0;
}