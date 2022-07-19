#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const int NUM_OF_SCORES = 5;
    
    float score_1,
          score_2,
          score_3,
          score_4,
          score_5,
          average,
          total;
    
    // Describe Program
    
    // Ask user to enter 5 test scores
    cout << "Input 5 numbers to average."<<endl;
    cin >> score_1;
    
    cin >> score_2;
   
    cin >> score_3;
    
    cin >> score_4;
    
    cin >> score_5;
    
    // Calculate average test score
    total = score_1 + score_2 + score_3 + score_4 + score_5;
    average = total / NUM_OF_SCORES;
    
    cout << setprecision(1) << fixed;
    cout << "The average = ";
    cout << average ;
            
    // Terminate Program
    return 0;
}