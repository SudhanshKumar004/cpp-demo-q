//Write a program that prompts the user to enter the starting velocity v0 in meters/second, the ending velocity v1 in meters/second,
// and the time span t in seconds, and displays the average acceleration.

#include <iostream>
using namespace std;
int main()
{
    float starting_velocity;
    cout << "Enter v0:" << "\n";
    cin >> starting_velocity;

    float ending_velocity;
    cout << "Enter v1:" << "\n";
    cin >> ending_velocity;

    float time;
    cout << "Enter t:" << "\n";
    cin >> time;

    float acceleration = (ending_velocity - starting_velocity) / time;

    cout << "The average acceleration is " << acceleration ;

    return 0;
}