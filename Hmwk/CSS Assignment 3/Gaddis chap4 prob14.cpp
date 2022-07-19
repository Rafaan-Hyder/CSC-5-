/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries


//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

    #include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {

    string runner1, runner2, runner3;
    int time1, time2, time3;

    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>runner1>>time1;
    cin>>runner2>>time2;
    cin>>runner3>>time3;

    if (time1 < time2 && time1 < time3)
    {
        cout << runner1 <<" "<< time1 << endl;

        if (time2 < time3)
        {
            cout << runner2 <<" "<< time2 << endl;
            cout << runner3 <<" "<< time3 << endl;
        }
        else if (time3 < time2)
        {
            cout << runner3 <<" "<< time3 << endl;
            cout << runner2 <<" "<< time2 << endl;
        }
    }
    else if (time2 < time1 && time2 < time3)
    {
        cout << runner2 <<" "<< time2 << endl;

        if (time1 < time3)
        {
            cout << runner1 <<" "<< time1 << endl;
            cout << runner3 << " "<<time3 << endl;
        }
        else if (time3 < time1)
        {
            cout << runner3 <<" "<< time3 << endl;
            cout << runner2 <<" "<< time2 << endl;
        }
    }
    else if (time3 < time2 && time3 < time1)
    {
        cout << runner3 <<" "<< time3 << endl;

        if (time2 < time1)
        {
            cout << runner2 <<" "<< time2 << endl;
            cout << runner1 <<" "<< time1 << endl;
        }
        else if (time1 < time2)
        {
            cout << runner1 <<" "<< time1 << endl;
            cout << runner2 <<" "<< time2 << endl;
        }
    }
    if(time1 < 0){
        cout<<"Error! please input a positive time";
    }
     if(time2 < 0){
        cout<<"Error! please input a positive time";
    }
     if(time3 < 0){
        cout<<"Error! please input a positive time";
    }
    
    return 0;
}
