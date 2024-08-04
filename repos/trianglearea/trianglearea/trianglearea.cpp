// trianglearea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void Read_numbers(unsigned short int& construction, unsigned short int& height) {
    cout << "Enter construction of rectangle:\n";
    cin >> construction;
    cout << "Enter height of rectangle:\n";
    cin >> height;
}

float Calculate_Rectangle_Area(unsigned short int construction, unsigned short int height) {
    return .5 * construction * height;
}
void Print_Rectangle_Area(float Area) {
    cout << "Rectangle area is: " << Area << endl;
}

int main()
{
    /*unsigned short int a;
    unsigned short int b;
    cout << "Enter height:" << endl;
    cin >> a;
    cout << "Enter width:" << endl;
    cin >> b;
    cout << "Triangle area is: " << .5 * a * b  << endl;*/
    unsigned short int construction;
    unsigned short int height;
    Read_numbers(construction, height);
    Print_Rectangle_Area(Calculate_Rectangle_Area(construction, height));
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
