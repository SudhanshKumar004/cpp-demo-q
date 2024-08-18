//please write a program that accepts Dividend, and Divisor from
// the user and print the remainder on the console.

#include <iostream>
using namespace std;
int main()
{
    cout << "enter a dividend:" << "\n";
    int dividend;
    cin >> dividend;

    cout << "enter a divisor:" << "\n";
    int divisor;
    cin >> divisor;

    int remainder = dividend % divisor;
    cout << "remanider = " << remainder << "\n";

    return 0;
}