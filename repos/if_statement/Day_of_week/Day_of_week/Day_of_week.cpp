// Day_of_week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enday {
    saterday, sunday, monday, tuesday, wednesday, thursday, fridayday
};
void enterdays(string days) {
    enday Day;
    
    cin >> days;
    if (days == "fridayday") {
        cout << "it's " << enday::fridayday << " fridayday" << endl;
    }
    else if (days == "monday") {
        cout << "it is " << enday::monday << " monday" << endl;
    }
    else if (days == "saterday") {
        cout << "it is " << enday::saterday << " saterday" << endl;
    }
    else if (days == "sunday") {
        cout << "it is " << enday::sunday << " sunday" << endl;
    }
    else if (days == "thursday") {
        cout << "it is " << enday::thursday << " thursday" << endl;
    }
    else if (days == "wednesday") {
        cout << "it is " << enday::wednesday << " wednesday" << endl;
    }
    else {
        cout << "wrong day" << endl;
        cout << "Enter day again please\n";
        enterdays(days);
    }
}
int main()
{
    enday Day;
    string days;
    cout << "Enter day please\n";
    enterdays(days);
    
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
