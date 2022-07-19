#include <iostream>
using namespace std;
//Constant definition
const double GALLONS_PER_LITER = 0.264179;
//Function definition
double convert_MilesPerGallon1(double miles1, double liters1);
double convert_MilesPerGallon2(double liters2, double miles2);
int main() {


	int liters1, liters2;
	double miles1, miles2;
	char repeat;
	do
		//Allow user to read in liters and miles to calculate MPG multipule times
	{
	    
	    	//display results
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		
		cout<<"Car 1"<<endl;
		cout << "Enter number of liters of gasoline:\n";
		cin >> liters1;
		
		cout << "Enter number of miles traveled:\n";
		cin >> miles1;
		
		cout << "Miler per gallon:" << convert_MilesPerGallon1(miles1, liters1) << endl;
		double MPG1 = convert_MilesPerGallon1(miles1, liters1);

		cout<<"\nCar 2"<<endl;
		cout << "Enter number of liters of gasoline:\n";
		cin >> liters2;

		cout << "Enter number of miles traveled:\n";
		cin >> miles2;
		
		cout << "Miles per gallon:" << convert_MilesPerGallon2(liters2, miles2) << endl;
		double MPG2 = convert_MilesPerGallon2(liters2, miles2);
		if (MPG1 > MPG2) {
			cout << "Car 1 is more fuel efficient\n";
		}
		else if (MPG1 < MPG2) {
			cout << "Car 2 is more fuel efficient\n";
		}
		else if (MPG1 == MPG2) {
			cout << "Both are equal, unable to determine which has the better fuel effinciency.\n";
		}
		else if (MPG1 == 0 && MPG2 == 0) {
			cout << "Neither vehicle moved, unable to determine which has the better fuel effinciency.\n";
		}
			//Ask user if program should be repeated
			cout<<endl;
		cout << "Again:\n";
		cin >> repeat;
		
		//End Loop
	} while (repeat == 'Y' || repeat == 'y');
	
	return 0;
}
//Function Definition
double convert_MilesPerGallon1(double miles1, double liters1) {
	//Function Call
	double MPG1;
		MPG1 = miles1 / (liters1 * GALLONS_PER_LITER);
		
		return MPG1;
}
double convert_MilesPerGallon2(double liters2, double miles2) {
	double MPG2;
		MPG2 = miles2 / (liters2 * GALLONS_PER_LITER);
		return MPG2;
}