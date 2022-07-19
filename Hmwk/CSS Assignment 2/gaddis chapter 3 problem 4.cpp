#include <iostream>

using namespace std;

int main()
{
    const int NUM_OF_MONTHS = 3;
    
    string month_1,
           month_2,
           month_3;
    
    float rainfall_month_1,
          rainfall_month_2,
          rainfall_month_3,
          total,
          average;
    
    
    
    cout << "Enter the name for month 1: ";
    cin >> month_1;
    cout << "How many inches of rain fell for " << month_1;
    cout << ": ";
    cin >> rainfall_month_1;
    
    cout << "Enter the name for month 2: ";
    cin >> month_2;
    cout << "How many inches of rain fell for " << month_2;
    cout << ": ";
    cin >> rainfall_month_2;
    
    cout << "Enter the name for month 3: ";
    cin >> month_3;
    cout << "How many inches of rain fell for " << month_3;
    cout << ": ";
    cin >> rainfall_month_3;
    
    
    total = rainfall_month_1 + rainfall_month_2 + rainfall_month_3;
    average = total / NUM_OF_MONTHS;
    
    
    
    cout << "\nThe average rainfall for ";
    cout << month_1 << ", ";
    cout << month_2 << ", and ";
    cout << month_3 << " is ";
    cout << average << " inches.\n" << endl;

    return 0;
}
