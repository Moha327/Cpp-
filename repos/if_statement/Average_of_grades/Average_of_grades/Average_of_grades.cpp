// Average_of_grades.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct strGradesinfo {
    unsigned short int grade1;
    unsigned short int grade2;
    unsigned short int grade3;
};

void readgrades(strGradesinfo& Grades) {
    cout << "Enter grade1: \n";
    cin >> Grades.grade1;
    cout << "Enter grade2: \n";
    cin >> Grades.grade2;
    cout << "Enter grade3: \n";
    cin >> Grades.grade3;
}

void printaverageofgrades(strGradesinfo  Grades) {
    float average = (Grades.grade1 + Grades.grade2 + Grades.grade3) / 3;
    if (average >= 50) {
        cout << "Pass" << endl;
    }
    else if (average < 50) {
        cout << "Failed" << endl;
    }
    cout << average << endl;
}

void entergradesinfo(strGradesinfo Grades[2]) {
    readgrades(Grades[0]);
    readgrades(Grades[1]);
}

void printaverageinfo(strGradesinfo Grades[2]) {
    printaverageofgrades(Grades[0]);
    printaverageofgrades(Grades[1]);
}

int main()
{
    strGradesinfo Grades[2];
    entergradesinfo(Grades);
    printaverageinfo(Grades);

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
