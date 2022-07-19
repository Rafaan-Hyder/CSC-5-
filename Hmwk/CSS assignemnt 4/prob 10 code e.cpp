#include <cstdlib>
#include <iostream>

using namespace std; 

int main{
  
  int num1;
  int num2;
  int num3;
  
  cout<<"enter number 1:\n";
  cin>>num1;
  cout<<"Enter number 2:\n";
  cin>>num2;
  cout<<"Enter number 3:\n";
  cin>>num3;
  
  if(num1 > num2 and num1 > num3)
    {
        return num1; // Returns number 1 if it is greater than number 2 and 3.
    }
    else if(num2 > num1 and num2 > num3)
    {
        return num2; // Returns number 2 if it is greater than number 1 and 3.
    }
    else if(num3 > num1 and num3 > num2)
    {
        return num3; // Returns number 3 if it is greater than number 1 and 2.
    }
    else
    {
        cout << "Fix";
        return num3;
    }
    
    return 0;
}
