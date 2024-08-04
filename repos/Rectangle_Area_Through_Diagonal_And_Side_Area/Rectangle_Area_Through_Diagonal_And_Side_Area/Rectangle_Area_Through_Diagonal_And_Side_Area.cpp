// Rectangle_Area_Through_Diagonal_And_Side_Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void Read_numbers(unsigned short int& length, unsigned short int& width) {
    cout << "Enter length of rectangle:\n";
    cin >> length;
    cout << "Enter width of rectangle:\n";
    cin >> width;
}

float Calculate_Rectangle_Area(unsigned short int length, unsigned short int width) {
    return length * ((sqrt(pow(width, 2) - pow(length, 2))));
}
void Print_Rectangle_Area(float Area) {
    cout << "Rectangle area is: " << Area << endl;
}
int main() {
    // Write C++ code here
    unsigned short int length;
    unsigned short int width;
    Read_numbers(length, width);
    Print_Rectangle_Area(Calculate_Rectangle_Area(length, width));
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
