// Sum_Of_Odd_numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
//void ReadNumber(int& num) {
//    cout << "Enter num from 1 to 100 please:\n";
//    cin >> num;
//    if (num < 1 || num>100) {
//        ReadNumber(num);
//    }
//}
//
//int PrintSumNum(int num) {
//    int sum = 0;
//    for (int i = 1; i <= num; i++) {
//        if (i % 2 == 1) {
//            sum += i;
//        }
//    }
//    return sum;
//}
unsigned short int Read_Number() {
    unsigned short int N;
    cout << "Pleae enter number that you want:\n";
    cin >> N;
    return N;
}
unsigned short int Find_Odd_Numbers(unsigned short int N) {
    unsigned short int sum=0;
    for (unsigned short int i = 1; i < N + 1; i++) {
        if (i % 2 == 1)
            sum += i;
    }
    return sum;
}
void Print_Sum(unsigned short int sum) {
    cout << "Sum of even numbers is: " << sum << endl;
}
int main()
{
    /*int num;
    ReadNumber(num);
    cout << PrintSumNum(num) << endl;
    return 0;*/
    Print_Sum(Find_Odd_Numbers(Read_Number()));
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
