// Logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << ((5 > 6 && 7 == 7)||(1||0))<<"\n";
    cout << (!(5 > 6 && 7 == 7) || (1 || 0)) << "\n";
    cout << (!(5 > 6 && 7 == 7) || !(1 || 0)) << "\n";
    cout << (!(5 > 6 && 7 == 7) && !(1 || 0)) << "\n";
    cout << ((5 > 6 && 7 <= 8) || (8>1 && 4<=3) && true) << "\n";
    cout << ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3) || true) << endl;
    cout << (12 >= 12) << "\n";
    cout << (12 > 7) << "\n";
    cout << (8 < 6) << "\n";
    cout << (8 == 8) << "\n";
    cout << (12 <= 12) << "\n";
    cout << (7==5) << endl;
    cout << !(12 >= 12) << "\n";
    cout << !(12 > 7) << "\n";
    cout << !(8 < 6) << "\n";
    cout << !(8 == 8) << "\n";
    cout << !(12 <= 12) << "\n";
    cout << !(7 == 5) << endl;
    cout << (1 && 0) << "\n";
    cout <<  (true && 0)<< "\n";
    cout << (0 || 1) << "\n";
    cout << (0 || 0) << "\n";
    cout << !(0) << "\n";
    cout << !(1 || 0) << endl;
    cout << ((7 == 7) && (7 > 5)) << "\n";
    cout << ((7 == 7) && (7 < 5)) << "\n";
    cout << ((7 == 7) || (7 < 5)) << "\n";
    cout << ((7 < 7) || (7 > 5)) << "\n";
    cout << !((7 == 7) && (7 > 5)) << "\n";
    cout << ((7 == 7) && !(7 < 5)) << endl;
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
