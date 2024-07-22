// Grade_A_B_C_D_E_F.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    unsigned short int Grade;
    cout << "Enter grade please:\n";
    cin >> Grade;
    if (Grade <= 100 && Grade >= 90) {
        cout << "A" << endl;
    }
    else if (Grade <= 89 && Grade >= 80) {
        cout << "B" << endl;
    }
    else if (Grade <= 79 && Grade >= 70) {
        cout << "C" << endl;
    }
    else if (Grade <= 69 && Grade >= 60) {
        cout << "D" << endl;
    }
    else if (Grade <= 59 && Grade >= 50) {
        cout << "E" << endl;
    }
    else{
        cout << "F" << endl;
    }
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
