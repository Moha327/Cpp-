// powerofnums234.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void powerofnum234procedure(long double num) {
    cout << fixed;
    cout << "The pwoer 2 of number is: " << pow(num,2) << "\n";
    cout << "The pwoer 3 of number is: " << pow(num, 3) << "\n";
    cout << "The pwoer 4 of number is: " << pow(num, 4) << "\n";
    cout << "The round of pwoer 2 of number is: " << round(pow(num, 2)) << endl;
    cout << "The round of pwoer 3 of number is: " << round(pow(num, 3)) << "\n";
    cout << "The round of pwoer 4 of number is: " << round(pow(num, 4)) << "\n";

}

int main()
{
    long double num;
    cout << fixed;
    cout << "Enter number please:\n";
    cin >> num;
    cout << "The pwoer 2 of number is: " << num * num << "\n";
    cout << "The pwoer 3 of number is: " << num * num * num << endl;
    cout << "The pwoer 4 of number is: " << num * num * num * num << "\n";
    cout << "The round of pwoer 2 of number is: " << round(num * num) << "\n";
    cout << "The round of pwoer 3 of number is: " << round(num * num * num) << "\n";
    cout << "The round of pwoer 4 of number is: " << round(num * num * num * num) << endl;
    powerofnum234procedure(num);
    return 0;
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
