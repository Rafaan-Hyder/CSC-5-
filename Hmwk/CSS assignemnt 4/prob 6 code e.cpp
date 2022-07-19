#include <iostream>
#include <iomanip>
using namespace std;
float const LITER = 0.264172;
float milesPerGallon(int ml, int lt);

int main ()
{
	char options;
	int lt, ml;
	
	do 
	{
	   
	  cout << "Enter number of liters of gasoline:"<<endl;;
	  cin >> lt;
	  cout<<endl;
  cout <<"Enter number of miles traveled: "<<endl;;
       cin >> ml;
       cout<<endl;
       cout<<setprecision(4);
	   cout << "miles per gallon:\n"  
            << milesPerGallon(ml, lt) << endl;
		cout << "Again:\n";
		cin >> options;
		cout<<endl;
		
	} while (options == 'y' || options == 'Y');
	return 0;
}
float milesPerGallon(int m, int l)
{
	float gallons;
	gallons = LITER * l;
	return (m/gallons);
}