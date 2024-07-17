// Rectanglearea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void rectangelareaprocedur(unsigned short int a, unsigned short int b) {
    cout << a * b << '\n';
}
int rectangelarea(unsigned short int a, unsigned short int b) {
    return a * b;
}
int main()
{
    short int a;
    short int b;
    cout << "Enter length: \n";
    cin >> a;
    cout << "Enter width: \n";
    cin >> b;
    rectangelareaprocedur(a,b);
    cout << rectangelarea(a, b) << endl;
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
