// Arraysofstructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct strInfo {
    string FirstName;
    string LastName;
    unsigned short int Age;
    string Phone;
};
void ReadInfo(strInfo& Person) {
    cout << "Enter FirstName:\n";
    cin >> Person.FirstName;
    cout << "Enter LastName:\n";
    cin >> Person.LastName;
    cout << "Enter Age:\n";
    cin >> Person.Age;
    cout << "Enter Phone:"<<endl;
    cin >> Person.Phone;

}

void PrintInfo(strInfo Person) {
    cout << "\n****************************\n";
    cout << "FirstName is:" << Person.FirstName << "\n";
    cout << "LastName is:" << Person.LastName << endl;
    cout << "Age is:" << Person.Age << "\n";
    cout << "Phone is:" << Person.Phone << "\n";
    cout << "\n****************************" << endl;
    
    
}
void ReadPersonInfo(strInfo Person[2]) {
    ReadInfo(Person[0]);
    ReadInfo(Person[1]);
}
void PrintPersonInfo(strInfo Person[2]) {
    cout << "\n********\n";
    PrintInfo(Person[0]);
    PrintInfo(Person[1]);
}
int main()
{
    strInfo Person[2];
    ReadPersonInfo(Person); 
    PrintPersonInfo(Person);
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
