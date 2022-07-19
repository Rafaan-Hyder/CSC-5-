#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    int numdays;
    float payInPennies = 0.01, totalPay = 0;
    
    cin>>numdays;
    while(numdays<1){
        cout<<"Invalid Input."<<endl;
        cout<<"Enter number of days";
        cin>>numdays;
    }
    for (int i=0; i<numdays; i++){
        totalPay=totalPay + payInPennies;
        payInPennies=payInPennies * 2;
    }
    cout<<"Pay = $"<<totalPay; 
}
