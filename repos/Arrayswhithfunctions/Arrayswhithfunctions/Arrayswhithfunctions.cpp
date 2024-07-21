// Arrayswhithfunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void readGrades(float grade[3]) {
    cout << "Enter grade1 \n";
    cin >> grade[0];
    cout << "Enter grade2 \n";
    cin >> grade[1];
    cout << "Enter grade3 \n";
    cin >> grade[2];
    
}
float calculateavragegrades(float grade[3]) {
    return  (grade[0] + grade[1] + grade[2]) / 3 ;
}

void printGradeData(float grade[3]) {
    cout << "Grade1 is: "<< grade[0] << "\n";
    cout << "Grade1 is: " << grade[1]<< "\n";
    cout << "Grade1 is: " << grade[2] << "\n";
    
}
int main()
{
    float grade[3];
    readGrades(grade);
    printGradeData(grade);
    cout << "The average of three grades is: " << calculateavragegrades(grade) << endl;
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
