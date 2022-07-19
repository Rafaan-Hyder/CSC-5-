/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
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