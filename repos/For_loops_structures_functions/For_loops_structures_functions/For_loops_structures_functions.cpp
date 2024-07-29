// For_loops_structures_functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct structpersoninfo {
    string firstname;
    string lastName;
    unsigned short int age;
    string Phone;
};
void EnterPersonInfo(structpersoninfo& Person) {
    cout << "Enter First name:"<<endl;
    cin >> Person.firstname;
    cout << "Enter Last name:\n";
    cin >> Person.lastName;
    cout << "Enter Age:\n";
    cin >> Person.age;
    cout << "Enter Phone:"<<endl;
    cin >> Person.Phone;
}

void PrintInfo(structpersoninfo& Person) {
    cout << "First name: " << Person.firstname << endl;
    cout << "Last name: " << Person.lastName << endl;
    cout << "First name: " << Person.age << endl;
    cout << "Phone Number: " << Person.Phone << endl;
}
void ReadArray(structpersoninfo Person[2], unsigned short int& People) {
    cout << "Enter number of people\n";
    cin >> People;
    for (unsigned short int i= 0; i < People; i++) {
        cout << "Person number: " << i + 1 << "\n";
        EnterPersonInfo(Person[i]); 
    }
}

void PrintArray(structpersoninfo Person[2],unsigned short int People) {
    for (unsigned short int i = 0; i < People; i++) {
        cout << "\n**************\n";
        cout << "Person number: " << i + 1 << "\n";
        PrintInfo(Person[i]);
        cout << "\n**************\n" << endl;
    }
}
int main()
{
    unsigned short int People;
    structpersoninfo Person[2];
    ReadArray(Person,People);
    PrintArray(Person,People);
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
