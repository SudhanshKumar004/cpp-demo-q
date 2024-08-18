// Write a program that reads a Celsius degree in a double value from the console,
// then converts it to Fahrenheit and displays the result.

#include <iostream>
using namespace std;
int main()
{
    double degree_in_celsius;
    cout << "Enter a degree in celsius: " ;
    cin >> degree_in_celsius;

    double fahrenheit = (9 / 5) * degree_in_celsius + 32;

    cout << degree_in_celsius << " Celsius is " << fahrenheit << " fehrenheit" ;

    return 0;
}