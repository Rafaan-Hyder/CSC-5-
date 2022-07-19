#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    float balance;
    float checks;
    float checkFee;
    float a = .10;
    float b = .08;
    float c = .06;
    float d = .04;
    float monthFee = 10;
    float balanceFee = 15;
    float newBalance;
    float totalFee;
    
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance;
    cin>>checks;
    
    cout<<setprecision(2)<<fixed;
    
    if(checks < 20){
        checkFee = checks * a;
        totalFee = checkFee + monthFee + balanceFee;
        newBalance = balance - totalFee;
        cout<<"Balance     $   "<<balance<<endl;
        cout<<"Check Fee   $     "<<checkFee<<endl;
        cout<<"Monthly Fee $    "<<monthFee<<endl;
        cout<<"Low Balance $    "<<balanceFee<<endl;
        cout<<"New Balance $    "<<newBalance;
    }
    
    if(checks >= 20 && checks < 40){
        checkFee = checks * b;
        totalFee = checkFee + monthFee + balanceFee;
        newBalance = balance - totalFee;
        cout<<"Balance     $   "<<balance<<endl;
        cout<<"Check Fee   $     "<<checkFee<<endl;
        cout<<"Monthly Fee $    "<<monthFee<<endl;
        cout<<"Low Balance $    "<<balanceFee<<endl;
        cout<<"New Balance $    "<<newBalance;
    }
    
    if(checks >= 40 && checks < 60 ){
        checkFee = checks * c;
        totalFee = checkFee + monthFee + balanceFee;
        newBalance = balance - totalFee;
        cout<<"Balance     $   "<<balance<<endl;
        cout<<"Check Fee   $     "<<checkFee<<endl;
        cout<<"Monthly Fee $    "<<monthFee<<endl;
        cout<<"Low Balance $    "<<balanceFee<<endl;
        cout<<"New Balance $    "<<newBalance;
    }
    
    if(checks >= 60){
        checkFee = checks * d;
        totalFee = checkFee + monthFee + balanceFee;
        newBalance = balance - totalFee;
        cout<<"Balance     $   "<<balance<<endl;
        cout<<"Check Fee   $     "<<checkFee<<endl;
        cout<<"Monthly Fee $    "<<monthFee<<endl;
        cout<<"Low Balance $    "<<balanceFee<<endl;
        cout<<"New Balance $    "<<newBalance;
    }
    
    if(checks < 0){
        cout<<"Number of checks written must be more than 0";
    }
    
    if(balance < 0){
        cout<<"URGENT! Your account is overdrawn";
    }
    
    return 0;
}