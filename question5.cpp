// Write a program that reads in the radius and length of a 
// cylinder and computes the area and volume using the following formulas:

#include <iostream>
using namespace std;
int main()
{
    float radius;
    cout << "Enter the radius of a cylinder:" ;
    cin >> radius;

    float length;
    cout << "Enter the length of a cylinder:";
    cin >> length;

    float area = radius * radius * 3.14;
    float volume = area * length;

    cout << "The area is " << area << "\n";
    cout << "The volume is " << volume << '\n';

    return 0;
}