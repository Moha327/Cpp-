// swap_two_numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swaptownumbersprocedures(short int &num1, short int &num2) {
    short int temp = 0;
    temp = num2;
    num2 = num1;
    num1 = temp;
    cout << "After swape inside function first number1 is: " << num1 << " second number2 is: " << num2 << "\n";
}



int main()
{
    short int num1;
    short int num2;
    cout << "Enter first number:\n";
    cin >> num1;
    cout << "Enter second number:" << endl;
    cin >> num2;
    cout << "Befor swap first number is: " << num1 << " second number is: " << num2 << "\n";
    swaptownumbersprocedures(num1,num2);
    cout << "After swape inside main function first number is: " << num1 << " second number is: " << num2 << endl;
    
    
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
