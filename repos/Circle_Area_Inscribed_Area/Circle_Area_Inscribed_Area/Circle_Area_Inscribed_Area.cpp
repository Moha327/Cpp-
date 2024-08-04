// Circle_Area_Inscribed_Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void Read_numbers(unsigned short int& A) {
    cout << "Enter A of circle:\n";
    cin >> A;
}

float Calculate_Circle_Area_Inscribed_Square(unsigned short int A) {
    float PI = 3.14;
    return (PI * pow(A, 2)) / 4;
}
void Print_Circle_Area_Inscribed_Square(float Area) {
    cout << "Rectangle area is: " << Area << endl;
}
int main() {
    // Write C++ code here
    unsigned short int D;
    Read_numbers(D);
    Print_Circle_Area_Inscribed_Square(Calculate_Circle_Area_Inscribed_Square(D));
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
