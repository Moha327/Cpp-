// half_number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
unsigned short int Enter_Number() {
    unsigned short int number;
    cout << "Enter num please" << endl;
    cin >> number;
    return number;
}
float Calculate_Half_Number(unsigned short int number) {
    return float(number) / 2;
}
void Print_Half_Number(unsigned short int number) {
    string Result;
    Result = "Half of "+ to_string(number)+ " is "+to_string(Calculate_Half_Number(number));
    cout << endl << Result << endl;
}
int main()
{
    Print_Half_Number(Enter_Number());
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
