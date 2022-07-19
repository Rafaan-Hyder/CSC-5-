#include <iostream>
using namespace std;
int main()
{
    const int MINIMUM = 0,
              MAXIMUM = 10;

    char symbol = '+';

    

    for(int i = MINIMUM; i < MAXIMUM; i++)
    {
        for(int j = MINIMUM; j <= i; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }

    
    for(int i = MINIMUM; i < MAXIMUM; i++)
    {
        for(int j = MAXIMUM; j > i; j--)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}