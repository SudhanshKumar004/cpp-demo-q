//Write a program that prompts the user to enter the distance to drive,
// the fuel efficiency of the car in kilometer per liter,
// and the price per liter, and displays the cost of the trip

#include <iostream>
using namespace std;
int main()
{
    float driving_distance;
    cout << "Enter the driving distance:" << "\n";
     cin >> driving_distance;
    
    float kilometer_per_liter;
    cout << "Enter Kilometer per liter:" << "\n";
    cin >> kilometer_per_liter;
   
    float price_per_liter;
    cout << "Enter Price per liter:" << "\n";
    cin >> price_per_liter;

    float cost_of_driving = price_per_liter * (driving_distance / kilometer_per_liter);

    cout << "The cost of driving is " << cost_of_driving ;
    
    return 0;
}