// Switch_case_Day_Of_Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enDayOfWeek{Saterday=1, Sunday = 2, Monday = 3, Tuesday = 4, Wednesday = 5, Thursday = 6 ,Friday = 7};

void ShowDayOfWeek() {
    cout << "*********************\n";
    cout << "Days of week menue\n";
    cout << "(1) Saterday\n";
    cout << "(2) Sunday\n";
    cout << "(3) Monday" << endl;
    cout << "(4) Tuesday\n";
    cout << "(5) Wednesday\n";
    cout << "(6) Thursday\n";
    cout << "(7) Friday\n" ;
    cout << "*********************\n";
    cout << "Enter number of day please\n";
}

enDayOfWeek ReadDayOfWeek() {
    int day;
    cin >> day;
    return enDayOfWeek(day);
}

string printDayOfWeek(enDayOfWeek Day) {
    switch (Day) {
    case enDayOfWeek::Saterday:
        return "Saterday";
        break;
    case enDayOfWeek::Sunday:
        return "Sunday";
        break;
    case enDayOfWeek::Monday:
        return "Monday";
        break;
    case enDayOfWeek::Tuesday:
        return "Tuesday";
        break;
    case enDayOfWeek::Wednesday:
        return "Wednesday";
        break;
    case enDayOfWeek::Thursday:
        return "Thursday";
        break;
    case enDayOfWeek::Friday:
        return "Friday";
        break;
    default:
        return "wrong";
    }
}
int main()
{
    
    ShowDayOfWeek();
    cout << printDayOfWeek(ReadDayOfWeek())<<endl;
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
