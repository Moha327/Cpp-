// Circle_Area_Inscribed_In_An_Isosceles_Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
void Read_numbers(unsigned short int& a, unsigned short  int& b) {
    cout << "Enter a of circle:\n";
    cin >> a;
    cout << "Enter b of circle\n";
    cin >> b;
}
float Calculate_Circle_Area_Inscribed_In_An_Isosceles_Triangle(unsigned short int a, unsigned short int b) {
    float PI = 3.1418;
    return (PI * float(pow(b, 2)) / 4) * (float(2 * a - b) / float(2 * a + b));
}
void Print_Circle_Area_Inscribed_In_An_Isosceles_Triangle(float Area) {
    cout << "Circle area is: " << Area << endl;
}
int main() {
    unsigned short int a;
    unsigned short int b;
    Read_numbers(a, b);
    Print_Circle_Area_Inscribed_In_An_Isosceles_Triangle(Calculate_Circle_Area_Inscribed_In_An_Isosceles_Triangle(a, b));
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
