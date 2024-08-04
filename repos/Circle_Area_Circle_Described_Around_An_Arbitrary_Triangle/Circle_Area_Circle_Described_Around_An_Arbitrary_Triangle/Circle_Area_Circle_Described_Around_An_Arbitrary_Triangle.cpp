// Circle_Area_Circle_Described_Around_An_Arbitrary_Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
void Read_numbers(unsigned short int& a, unsigned short  int& b, unsigned short int& c) {
    cout << "Enter a of circle:\n";
    cin >> a;
    cout << "Enter b of circle:\n";
    cin >> b;
    cout << "Enter c of circle:\n";
    cin >> c;
}
float Calculate_Circle_Area_Circle_Described_Around_An_Arbitrary_Triangle(unsigned short int& a, unsigned short int& b, unsigned short int& c) {
    float PI = 3.1418;
    float p = float(a + b + c) / 2;
    float d = float(a * b * c) / float(4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    return PI * pow(d, 2);
}
void Print_Circle_Area_Circle_Described_Around_An_Arbitrary_Triangle(float Area) {
    cout << "Circle area is: " << Area << endl;
}
int main() {
    unsigned short int a;
    unsigned short int b;
    unsigned short int c;
    Read_numbers(a, b, c);
    Print_Circle_Area_Circle_Described_Around_An_Arbitrary_Triangle(Calculate_Circle_Area_Circle_Described_Around_An_Arbitrary_Triangle(a, b, c));
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
