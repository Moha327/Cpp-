// Grade_A_B_C_D_E_F.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Read_Mark(unsigned short int& Mark) {
    cout << "Pleae enter your mark:\n";
    cin >> Mark;
}
string Check_Mark(unsigned short int& Mark) {
    if (Mark <= 100 && Mark > 89)
        return "A";
    else if (Mark <= 89 && Mark > 79)
        return "B";
    else if (Mark <= 79 && Mark > 69)
        return "C";
    else if (Mark <= 69 && Mark > 59)
        return "D";
    else if (Mark <= 59 && Mark > 49)
        return "E";
    else
        return "F";
}
void Print_Result(string Result) {
    cout << "Your Mark: " << Result << endl;
}
int main()
{
    /*unsigned short int Grade;
    cout << "Enter grade please:\n";
    cin >> Grade;
    if (Grade <= 100 && Grade >= 90) {
        cout << "A" << endl;
    }
    else if (Grade <= 89 && Grade >= 80) {
        cout << "B" << endl;
    }
    else if (Grade <= 79 && Grade >= 70) {
        cout << "C" << endl;
    }
    else if (Grade <= 69 && Grade >= 60) {
        cout << "D" << endl;
    }
    else if (Grade <= 59 && Grade >= 50) {
        cout << "E" << endl;
    }
    else{
        cout << "F" << endl;
    }*/
    unsigned short int Mark;
    Read_Mark(Mark);
    Print_Result(Check_Mark(Mark));
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
