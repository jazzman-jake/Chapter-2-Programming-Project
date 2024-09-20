//Terrence Williamson
//09.18.24
//Chapter 2 Programming Project
//Program-1-Ocean-Levels

//Assume the ocean’s level is currently rising at about 1.5 millimeters per year
//need current ocean level
//program will display changes from current level to:
//5, 7, and 10 years from now based upon current level

#include <iostream>
using namespace std;
//initialize variables for current sea level, rate which it rises,
// and how many mm it will have rised in the given time spans
float clevel = 104.7;
float rise_rate = 1.5;
float x5 = rise_rate * 5;
float x7 = rise_rate * 7;
float x10 = rise_rate * 10;



int main()
{//displays data on screen in bulleted list giving x variables for years 5, 7, 10
    cout << "We know that the ocean's current level is ";
    cout << clevel;
    cout << " millimeters. In the future, the level will rise an additional:\n* ";
    cout << x5;
    cout << "mm in 5 years.\n* ";
    cout << x7;
    cout << "mm in 7 years.\n* ";
    cout << x10;
    cout << "mm in 10 years.\n\n";
    return 0;
}
 