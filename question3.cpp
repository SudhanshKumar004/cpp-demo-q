/*
  Write a program to accept int length and int breadth of rectangle from user. 
  Calculate int area and int perimeter of rectangle. 
  Print the area and perimeter on the console.
*/

#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "enter length of rectangle: " << "\n";
    cin >> length;

    int breadth;
    cout << "enter breadth of rectangle: " << "\n";
    cin >> breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    cout << "Area of rectangle = " << area << "\n";
    cout << "Perimeter of rectangle = " << perimeter << "\n";

    return 0;
}