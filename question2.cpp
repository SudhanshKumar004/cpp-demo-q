//Write a program to accept int side of a Square from user. 
//Calculate int area and int perimeter of square. 
//Print the area and perimeter on the console.

#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "Enter side of a square: " << "\n";
    cin >> side;

    int area = side * side;
    int perimeter = 4 * side;

    cout << "Area of square = " << area << "\n";
    cout << "Perimeter of square = " << perimeter << "\n";

    return 0;
}