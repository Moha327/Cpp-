// circle_area_along_the_circumference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void Read_numbers(unsigned short int& L) {
    cout << "Enter L of circle:\n";
    cin >> L;
}

float Calculate_Circle_Area_Along_The_Circumference(unsigned short int L) {
    float PI = 3.140;
    return pow(L, 2) / (4 * PI);
}
void Print_Circle_Area_Along_The_Circumference(float Area) {
    cout << "Circle area is: " << Area << endl;
}


//void circle_area_along_the_circumference(unsigned int Length) {
//    float Pi = 3.14;
//    cout << "circulararea is: " << (Length * Length) / (4 * Pi) << endl;
//    cout << "floor of circulararea is: " << floor((Length * Length) / (4 * Pi)) << endl;
//}
int main()
{
    /*unsigned int Length;
    cout << "Enter diameter: " << endl;
    cin >> Length;
    circle_area_along_the_circumference(Length);*/
    unsigned short int L;
    Read_numbers(L);
    Print_Circle_Area_Along_The_Circumference(Calculate_Circle_Area_Along_The_Circumference(L));
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
