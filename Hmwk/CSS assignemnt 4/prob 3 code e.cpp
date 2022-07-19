#include <iostream>
using namespace std;
int main()
{
    const int SENTINEL_VALUE = -99;
    int num,
        min,
        max;

    
    cin >> num; // Error 

    min = max = num;

    while (num != SENTINEL_VALUE)
    {
        if (num < min)
            min = num;

        if (num > max)
            max = num;

        
        cin >> num;
        
    }
    
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is "  << max;

    return 0;
}