// Piggy_Bank_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    unsigned  int Pennies;
    unsigned int Nickels;
    unsigned int Dimes;
    unsigned int Quarters;
    unsigned int Dollars;
    cout << "Enter number of Pennies"<<endl;
    cin>> Pennies;
    cout << "Enter number of Nickels" << endl;
    cin >> Nickels;
    cout << "Enter number of Dimes" << endl;
    cin >> Dimes;
    cout << "Enter number of Quarters" << endl;
    cin >> Quarters;
    cout << "Enter number of Dollars" << endl;
    cin >> Dollars;
    float total = (Pennies + Nickels*5 + Dimes*10 + Quarters*25 + Dollars*100)*.01;
    cout << "Total is: " << total << endl;
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
