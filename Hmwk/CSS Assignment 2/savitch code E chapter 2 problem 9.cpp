/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <string>

using namespace std;
int main()
{

// lets declare some variable first.
  int positiveSum =0;  
int negativeSum =0; 
int totalSum =0; 

int number=0; 

cout<<"Input 10 numbers, any order, positive or negative";

for (int i = 1; i <=10; i++)  
{
    
    cin >> number;
    
    
    if (number >=0)
    {
        positiveSum += number;   
    }
    else if (number < 0)
   {
       negativeSum += number;   
   }

} 


totalSum = positiveSum + negativeSum;

cout << endl;
cout << "Negative sum = " << negativeSum << endl;
cout << "Positive sum =  " << positiveSum << endl;
cout << "Total sum    =   " << totalSum;

return 0;
}