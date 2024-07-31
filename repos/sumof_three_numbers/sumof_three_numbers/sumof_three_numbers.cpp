// sumof_three_numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
//struct strnumbers {
//    unsigned short int num1;
//    unsigned short int num2;
//    unsigned short int num3;
//};
//
//strnumbers Read_numbers() {
//    strnumbers Number;
//    cout << "enter num1" << endl;
//    cin >> Number.num1;
//    cout << "enter num2" << endl;
//    cin >> Number.num2;
//    cout << "enter num3" << endl;
//    cin >> Number.num3;
//    return Number;
//}
//string Calculate_sum_of_numbers(strnumbers Number) {
//    string Result;
//    Result = "sum of three numbers is " + to_string(Number.num1 + Number.num2 + Number.num3);
//    return Result;
//}
//
//void Print_Sum(strnumbers Number) {
//    cout << Calculate_sum_of_numbers(Number) << endl;
//}

unsigned short int Read_Numbers(unsigned short int& num1, unsigned short int& num2, unsigned short int& num3) {
    cout << "enter num1" << endl;
        cin >> num1;
        cout << "enter num2" << endl;
        cin >> num2;
        cout << "enter num3" << endl;
        cin >> num3;
        return 0;
}
unsigned short int Calculate_sum_of_numbers(unsigned short int num1, unsigned short int num2, unsigned short int num3) {
    return num1 + num2 + num3;
}

void Print_Sum(unsigned short int Result) {
       cout << Result << endl;
}
int main()
{
    unsigned short int num1;
    unsigned short int num2;
    unsigned short int num3;
    Read_Numbers(num1, num2, num3);
    Print_Sum(Calculate_sum_of_numbers( num1, num2, num3));
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
