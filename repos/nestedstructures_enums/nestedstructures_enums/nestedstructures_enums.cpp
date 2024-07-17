// nestedstructures_enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enGreen;
enum enColor { Red, Blue = 300,Green , Yellow };
enum enColor1 { Red1, Blue1 = 300, Green1, Yellow1 };
enum enMartialstatus { Single=100,Married=200 };
enum enGender { Male=100,Female=200 };

struct stContactinfo {
    string phone;
    string boxno;
    enColor1 Color;
};
struct stPerson {
    string name;
    enColor myColor1;
    enMartialstatus materialStatus;
    enGender gender;
    stContactinfo Contactinfo;
};
int main()
{
    stPerson Person1;
    enColor myColor;
    enMartialstatus myMartialstatus;
    enColor  greendegree;
    enGender gender;

    myColor = enColor::Yellow;
    myMartialstatus = enMartialstatus::Single;
    gender = enGender::Male;
    Person1.myColor1 = enColor::Green;
    Person1.materialStatus = enMartialstatus::Single;
    Person1.gender = enGender::Male;
    Person1.Contactinfo.Color = enColor1::Green1;
    cout << myColor << '\n';
    cout << myMartialstatus << '\n';
    cout << gender << '\n';
    cout << Person1.myColor1 << endl;
    cout << Person1.materialStatus << '\n';
    cout << Person1.gender << '\n';
    cout << Person1.Contactinfo.Color << endl;
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
