#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
string package;
 float time;
 float price;
 cout<<"ISP Bill"<<endl;
 cout << "Input Package and Hours"<<endl;;
 cin >> package;
 cin>>time;
 // Package validation
 if ((package == "A") || (package == "B") || (package == "C")) {

 // Time validation
 if (time <= 744) {
// Package A
if (package == "A") {
if (time > 10) {
price = 9.95 + (time - 10) * 2;
} else {
price = 9.95;
}
// Package B
} else if (package == "B") {
if (time > 20) {
price = 14.95 + (time - 20) * 1;
} else {
price = 14.95;
}
// Package C
} else {
price = 19.95;
}
 } else {
cout << "Invalid number of hours!";
 }
 } else {
 cout << "Invalid package!";
}
cout << "Bill = $ " << price;
} 
