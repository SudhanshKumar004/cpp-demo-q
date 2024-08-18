// Write a program that reads the balance and the annual percentage 
// interest rate and displays the interest for the next month.

#include <iostream>
using namespace std;
int main()
{
    float balance = 1000;
    float annual_interest_rate = 5.5;

    float interest = balance * (annual_interest_rate/1200);

    cout << "interest for the next month is " << interest << "\n";

    return 0;


}
