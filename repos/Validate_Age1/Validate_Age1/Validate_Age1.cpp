// Validate_Age1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enValidateAge1 {
    valid = 1,
    invalid = 2
};

void Read_Age1(unsigned short int& Age) {
    cout << "Enter age:\n";
    cin >> Age;
}

enValidateAge1 Check_Validate_Age1(unsigned short int Age) {
    if (Age >= 18 && Age <= 45) {
        return enValidateAge1::valid;
    }
    else {
        return enValidateAge1::invalid;
    }
}

void Print_Validate_Age1(unsigned short int& Age) {
    enValidateAge1 Valid = Check_Validate_Age1(Age);
    if (Valid == enValidateAge1::valid) {
        cout << "Valid Age\n";
    }
    else if (Valid == enValidateAge1::invalid) {
        cout << "Invalid Age, please enter again:\n";
        Read_Age1(Age);
        Print_Validate_Age1(Age); // ??????? ?????? ??? ???? ?????? ?? ????? ??????
    }
}

int main() {
    unsigned short int Age;
    Read_Age1(Age);
    Print_Validate_Age1(Age);
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
