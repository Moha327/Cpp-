// Driver_licsens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct strDriverinfo {
    unsigned short int age;
    unsigned short int hasliscencedrive;

};
void readinfo(strDriverinfo Driver) {
    cout << "Enter age: \n";
    cin >> Driver.age;
    if (Driver.age < 21) {
        cout << "Rejected\n";
    }
    else {
        cout << "do you have a hasliscencedrive 0:No/1:Yes?:\n";
        cin >> Driver.hasliscencedrive;
        if (Driver.hasliscencedrive == 1) {
            cout << "Hired" << endl;
        }
        else {
            cout << "Rejected" << endl;
        }
    }
}

void enterdriverinfo(strDriverinfo Driver[2]) {
    readinfo(Driver[0]);
    readinfo(Driver[1]);
}
int main()
{
    strDriverinfo Driver[2];
    enterdriverinfo(Driver);
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
