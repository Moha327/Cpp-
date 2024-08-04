// Print_num_from_N_to_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
unsigned short int Read_Number() {
    unsigned short int N;
    cout << "Pleae enter number that you want:\n";
    cin >> N;
    return N;
}
void Print_Numbers(unsigned short int N) {
    for (unsigned short int i = 1; i < N + 1; i++) {
        cout << i << "\t";
    }
}
//void ReadNumber(int& num) {
//    cout << "Enter number you need from 1 to 100" << endl;
//    cin >> num;
//    if (num > 100 || num < 1) {
//        ReadNumber(num);
//    }
//    else {
//        for (int i = num; i >0; i--) {
//            if (i % 10 == 0) {
//                cout << i << endl;
//            }
//            else {
//                cout << i << "\n";
//            }
//        }
//    }
//
//}
//int PrintNum(int num) {
//    ReadNumber(num);
//    return 0;
//}
int main()
{
    /*int num;*/
    /*cout << "Enter number you need from 1 to 100" << endl;*/
    /*cin >> num;
    for (int i = num; i >0; i--) {
        if (i % 10 == 0) {
            cout << i << endl;
        }
        else {
            cout << i << "\n";
        }
    }*/
    /*ReadNumber(num);
    cout << PrintNum(num) << endl;*/
    Print_Numbers(Read_Number());

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
