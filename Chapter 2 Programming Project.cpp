//Terrence Williamson
//09.19.24
//Chapter 2 Programming Project
//Distance-MPG

#include <iostream>
using namespace std;
//initialize variables for max gallons of gas in car, then MPG of driving-
//-in town and on highways
int max_tank = 20;
float MPGtown = 23.5, MPGhwy = 28.9;

int main()
{//display calculations on screen to show distance tarveled in diff scenarios
    cout << "A car's tank holds ";
    cout << max_tank;
    cout << " gallons. The mileage lets it travel, on one full tank:\n* ";
    cout << MPGtown * max_tank;
    cout << " miles in towns:\n* ";
    cout << MPGhwy * max_tank;
    cout << " miles on the highway\n\n";
    return 0;
}