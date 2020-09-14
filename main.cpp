/*
Ian Sitienei
C++ Fall 2020
Due September 14 2020 11:59pm
This lab is designed to get your familiar output to the command using C++
*/

#include <iostream>
#include <string>

using namespace std;
 
const string M = " Monday       "; //Days of the week;
const string  T = " Teusday     ";  
const string W = " Wednesday    ";
const string TH = " Thursday    ";
const string F = " Friday       ";
const string C1 =  "8:00 Calclus 1        "; //Declaring class names 
const string C =   " C++                  ";
const string P =   " 9:00 public speaking  ";
const string CP =  " Clasical Physic     ";
const string starts1 = " *   *    *    *    *    "; //Declaring starline to cell
const string starts2 = "   *    *    *    *    * ";
int main()
{

	// the schedule
	cout << M << C1  << endl;
	cout << M << "1:30"  << C << endl << endl;
	cout << T << P << endl;
	cout << T << "1.00 " << C << endl << endl;
	cout << W << C1 << endl;
	cout << W << "2:00" << CP <<  endl << endl;
	cout << TH << P << endl;
	cout << TH << "2:00" << CP <<  endl << endl;
	cout << F << C1 << endl << endl;

	// puting checkboard
	cout << starts1 << endl;
	cout << starts2 << endl;
	cout << starts1 << endl;
	cout << starts2 << endl;
	cout << starts1 << endl;
	cout << starts2 << endl;
	cout << starts1 << endl;
	cout << starts2 << endl;

	return 0;
}