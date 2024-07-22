// Simple_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void operationType( int  &number1, int  &number2) {
    string Operation;
    cout << "Enter number1 please:\n";
    cin >>number1;
    cout << "Enter number2 please:\n";
    cin >> number2;
    cout << "Enter operation type:\n";
    cin >> Operation;
    float result;
    if (Operation=="*") {
        result = number1 * number2;
        cout << result << endl;
    }
    else if (Operation == "/") {
        result = float(number1) / number2;
        cout << result << endl;
    }
    else if (Operation == "+") {
        result = number1 + number2;
        cout << result << endl;
    }
    else if (Operation == "-") {
        result = number1 - number2;
        cout << result << endl;
    }
}
int main()
{
     int number1;
     int  number2;
     operationType(number1,number2);
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
