/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 5th, 2022, 11:25 AM
 * Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
#include <cstdlib>   //Random Number
#include <ctime>     //Time Library
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const float ACRFT2=43560;//Conversion from Acres to Ft^2
const float FTMILE=5280;//Number of feet to a mile
const unsigned char PERCENT=100;//Conversion to Decimal from Percent

//Function Prototypes
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();
void prblm8();
void prblm9();


//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Repeat the process
    do{
    
        //Initialize Variables
        cout<<"Which Problem would you like to run"<<endl;
        cout<<"Type 0 for Problem 1"<<endl;
        cout<<"Type 1 for Problem 2"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cout<<"Type 4 for Problem 5"<<endl;
        cout<<"Type 5 for Problem 6"<<endl;
        cout<<"Type 6 for Problem 7"<<endl;
        cout<<"Type 7 for Problem 8"<<endl;
        cout<<"Type 8 for Problem 9"<<endl;
        cin>>choice;

        //Map the Inputs to the Outputs
        switch(choice){
            case '0':prblm1();break;
            case '1':prblm2();break;
            case '2':prblm3();break;
            case '3':prblm4();break;
            case '4':prblm5();break;
            case '5':prblm6();break;
            case '6':prblm7();break;
            case '7':prblm8();break;
            case '8':prblm9();break;
        }
    }while(choice>='0'&&choice<='8');

    //Exit the code
    return 0;
}

void prblm1(){
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


void prblm2(){
        int n;
    char answer = ' ';
    
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
     while(cin>>n)
     {
     int i,j,k,l;
     l=(n/1000)*1000;
     if(l==1000)
          cout<<"M";
     if(l==2000)
          cout<<"MM";
     if(l==3000)
          cout<<"MMM";
     k=(n%1000);
     k=(k/100)*100;
     if (k == 100)
		 cout<<"C";
	else if (k == 200)
		 cout<<"CC";
	else if (k == 300)
		 cout<<"CCC";
	else if (k == 400)
		 cout<<"CD";
	else if (k ==500)
		 cout<<"D";
	else if (k == 600)
		 cout<<"DC";
	else if (k == 700)
		 cout<<"DCC";
	else if (k ==800)
		 cout<<"DCCC";
	else if (k == 900)
		 cout<<"CM";
     k=n%1000;
     l=k%100;
     j=(l/10)*10;
     if (j == 10)
		 cout<<"X";
	else if (j == 20)
		 cout<<"XX";
	else if (j == 30)
		 cout<<"XXX";
	else if (j == 40)
		 cout<<"XL";
	else if (j ==50)
		 cout<<"L";
	else if (j == 60)
		 cout<<"LX";
	else if (j == 70)
		 cout<<"LXX";
	else if (j ==80)
		 cout<<"LXXX";
	else if (j == 90)
		 cout<<"XC";
     i=l%10;
     if (i == 1)
		 cout<<"I";
	else if (i == 2)
		 cout<<"II";
	else if (i == 3)
		 cout<<"III";
	else if (i == 4)
		 cout<<"IV";
	else if (i ==5)
		 cout<<"V";
	else if (i == 6)
		 cout<<"VI";
	else if (i == 7)
		 cout<<"VII";
	else if (i ==8)
		 cout<<"VIII";
	else if (i == 9)
		 cout<<"IX";
		 cout<<endl;
    if(n < 1000 || n > 3000){
        cout<<n<<" is Out of Range!";
    }
    
                 
     }
     return 0;
}

void prblm3(){
        int month, day;
    char ans, space; 

      
    {
        cout << "Please Enter the Month of your Birthday Follow by the Day(ex. 12/01): \n";
        cin >> month >> space >> day ; 

        if((month == 3 && day >= 21)||(month==4 && day <= 19))
           {
              cout << "You Are an Aries! \n";
           }
        else if((month == 4 && day >= 20)||(month==4 && day <= 20))
           {
              cout << "You Are an Taurus! \n";
           }
        else if((month == 5 && day >= 21)||(month==6 && day <= 21))
           {
              cout << "You Are an Gemini! \n";
           }
        else if((month == 6 && day >= 22)||(month==7 && day <= 22))
           {
              cout << "You Are an Cancer! \n";
           }
        else if((month == 7&& day >= 23)||(month==8 && day <= 22))
           {
              cout << "You Are an Leo! \n";
           }
        else if((month == 8&& day >= 23)||(month==9 && day <= 22))
           {
              cout << "You Are an Virgo! \n";
           }
        else if((month == 9&& day >= 23)||(month==10 && day <= 22))
           {
              cout << "You Are an Libra! \n";
           }
        else if((month == 10&& day >= 23)||(month==11 && day <= 21))
           {
              cout << "You Are an Scorpio! \n";
           }
        else if((month == 11&& day >= 22)||(month==12 && day <= 21))
           {
              cout << "You Are an Saggitarius! \n";
           }
        else if((month == 12&& day >= 22)||(month==1 && day <= 19))
           {
              cout << "You Are an Capricorn! \n";
           }
        else if((month == 1&& day >= 20)||(month==2 && day <= 18))
           {
              cout << "You Are an Aquarius! \n";
           }
        else if((month == 2&& day >= 19)||(month==3 && day <= 20))
           {
              cout << "You Are an Pisces! \n";
           }

        
     return 0;

}
}

void prblm4(){
    string horo1;
    string horo2;
    
    cout<<"Horoscope Program which examines compatible signs"<<endl;
    cout<<"Input 2 signs"<<endl;
    cin>>horo1;
    cin>>horo2;
    
    if(horo1 == "Cancer" || "Scorpio" || "Pisces" && horo2 == "Cancer" || "Scorpio" || "Pisces"){
        cout<<horo1<<" and "<<horo2<<" are compatible water signs.";
    }
        if(horo1 == "Aries" || "Leo" || "Sagittarius" && horo2 == "Aries" || "Leo" || "Sagittarius"){
        cout<<horo1<<" and "<<horo2<<" are compatible fire signs.";
    }
            if(horo1 == "Taurus" || "Virgo" || "Capricorn" && horo2 == "Taurus" || "Virgo" || "Capricorn"){
        cout<<horo1<<" and "<<horo2<<" are compatible earth signs.";
    }
                if(horo1 == "Gemini" || "Libra" || "Aquaius" && horo2 == "Gemini" || "Libra" || "Aquaius"){
        cout<<horo1<<" and "<<horo2<<" are compatible air signs.";
    }
    else{
        cout<<horo1<<" and "<<horo2<<" are not compatible signs";
    }
}

void prblm5(){
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

void prblm6(){
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

void prblm7(){
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

void prblm8(){
    string x;
  
 
string y;
  
 
string z;
  
 
cout << "Sorting Names" << endl;
  
cout << "Input 3 names" << endl;
  
 
cin >> x;
  
 
cin >> y;
  
 
cin >> z;
  
 
 
if (x < y && y < z)
    
    {
      
 
cout << x << endl;
      
cout << y << endl;
      
cout << z;
    
 
}
  
 
 
if (y < x && x < z)
    
    {
      
 
cout << y << endl;
      
cout << x << endl;
      
cout << z;
    
 
}
  
 
 
if (z < x && x < y)
    
    {
      
 
cout << z << endl;
      
cout << x << endl;
      
cout << y;
    
 
}
  
 
 
if (x < z && z < y)
    
    {
      
 
cout << x << endl;
      
cout << z << endl;
      
cout << y;
    
 
}
  
 
 
if (y < z && z < x)
    
    {
      
 
cout << y << endl;
      
cout << z << endl;
      
cout << x;
    
 
}
  
 
 
if (z < y && y < x)
    
    {
      
 
cout << z << endl;
      
cout << y << endl;
      
cout << x;
    
 
    }

 
 
if (z < y && y < x)
  
 
  {
    
 
cout << z << endl;
    
 
cout << y << endl;
    
 
cout << x;
  
}
    return 0;
}

void prblm9(){
    char p1, p2;
	string check;
	
	{
	    cout<<"Rock Paper Scissors Game"<<endl;
		cout << "Input Player 1 and Player 2 Choices"<<endl;
		cin>>p1;
		cin>>p2;
		
		p1 = toupper(p1);
		p2 = toupper(p2);
		if	(p1 == p2)
			cout << "Nobody wins" << endl;
		else
		{
			switch (p1)
			{
			case 'P':
				if	(p2 == 'R')
					cout << "Paper covers rock.";
				else
					cout << "Scissors cuts paper.";
				break;
				
			case 'R':
				if	(p2 == 'S')
					cout << "Rock breaks scissors.";
				else
					cout << "Paper covers rock.";
				break;	
				
			case 'S':
				if	(p2 == 'P')
					cout << "Scissors cuts paper.";
				else
					cout << "Rock breaks scissors.";
				
			}
		}
}
}
