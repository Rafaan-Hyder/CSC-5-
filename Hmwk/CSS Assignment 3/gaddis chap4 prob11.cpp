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
    
    int points;
    int books;
    
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    
    if(books < 1){
        cout<<"Books purchased =  "<<books<<endl;
        cout<<"Points earned   = 0";
    }
    if(books == 1){
        cout<<"Books purchased =  "<<books<<endl;
        cout<<"Points earned   = 5";
    }
    if(books ==2){
        cout<<"Books purchased =  "<<books<<endl;
        cout<<"Points earned   = 15";
    }
    if(books == 3){
        cout<<"Books purchased =  "<<books<<endl;
        cout<<"Points earned   = 30";
    }
    if(books >= 4 ){
        cout<<"Books purchased =  "<<books<<endl;
        cout<<"Points earned   = 60";
    }
    
    
    return 0;
}