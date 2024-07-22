// Validate_age.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct strValidateAge {
    unsigned short int age;
};




void readvalidateage(strValidateAge& Age) {
    cout << "Enter age: \n";
    cin >> Age.age;

}

void printvalidateage(strValidateAge Age) {
    if (Age.age <= 45 && Age.age >= 18) {
        cout << "Valid Age\n";

    }
    else {
        cout << "Invalid Age" << endl;
    }

}

void readvalidateageofperson(strValidateAge Age[2]) {
    readvalidateage(Age[0]);
    readvalidateage(Age[1]);
}
void  printvalidateageofperson(strValidateAge Age[2]) {
    printvalidateage(Age[0]);
    printvalidateage(Age[1]);
}
int main()
{
    strValidateAge Age[2];
    readvalidateageofperson(Age);
    printvalidateageofperson(Age);
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
