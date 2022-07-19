/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

#include <iostream>
#include <iomanip>  
#include <cmath>    

using namespace std;

int main()
{
    
    double angle;

    
    cout<<"Calculate trig functions"<<endl;
    cout << "Input the angle in degrees."<<endl;
    cin >> angle;

    // Display the sine, cosine, and tangent of the angle
    cout << setprecision(4) << fixed;
    cout << "sin(45) = " << sin(angle) << endl;
    cout << "cos(45) = " << cos(angle) << endl;
    cout << "tan(45) = " << tan(angle);
    

    // Terminate Program
    return 0;
}