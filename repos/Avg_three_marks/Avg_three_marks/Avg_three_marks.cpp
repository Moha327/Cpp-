// Avg_three_marks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    unsigned short int mark1;
    unsigned short int mark2;
    unsigned short int mark3;
    cout << "Enter mark1:"<<endl;
    cin >> mark1;
    cout << "Enter mark2:" << endl;
    cin >> mark2;
    cout << "Enter mark3:" << endl;
    cin >> mark3;
    cout << "The average of 3 marks is:" << (mark1 + mark2 + mark3) / 3 << endl;
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
