// Mark_Pass_Failed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
enum enMarkstatus {
    Fail = 1,
    Pass = 2

};
unsigned short int Enter_Mark() {
    unsigned short int mark;
    cout << "Enter mark: \n";
    cin >> mark;
    return mark;
}
enMarkstatus check_mark(unsigned short int mark) {
    if (mark < 50)
        return enMarkstatus::Fail;
    else
        return enMarkstatus::Pass;
}
void print_result(unsigned short int mark) {
    if (check_mark(mark) == enMarkstatus::Fail)
        cout << "\n You Failed"<<endl;
    else
        cout << "\n You Passed"<<endl;
}

int main()
{
    print_result(Enter_Mark());
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
