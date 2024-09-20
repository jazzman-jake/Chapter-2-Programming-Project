//Terrence Williamson
//09.19.24
//Chapter 2 Programming Project
//Energy-Drink

//total customers starting 16,500
//15% bought energy drink per week
//58% of the 15% prefer citrus

#include <iostream>
using namespace std;
//intializing variables for total customers surveyed, percentage of customers-
//-who buy energy drinks every week and who, of that group, prefer citrus
int surv = 16'500;
//0.15: 15% of total surv bought energy drinks
float drinkers = 0.15 * surv;
//0.58: 58% of buyers prefer citrus flavored drinks
int citrus = 0.58 * drinkers;

int main()
{//print data to screen
    cout << "A soft drink company surveyed 16,500 of its customers.\n";
    cout << drinkers;
    cout << " of those surveyed buy energy drinks once or more weekly.\n";
    cout << citrus;
    cout << " of those who buy the drinks prefer citrus flavored versions.\n\n";  
    return 0;
}