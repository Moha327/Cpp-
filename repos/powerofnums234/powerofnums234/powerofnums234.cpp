// powerofnums234.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void Read_Number(int& N) {
    cout << "Pleae enter number that you want:\n";
    cin >> N;
}
int Find_Power_2_Of_Number(int N) {
    int power2;
    power2 = pow(N, 2);
    return power2;
}
int Find_Power_3_Of_Number(int N) {
    int power3;
    power3 = pow(N, 3);
    return power3;
}
int Find_Power_4_Of_Number(int N) {
    int power4;
    power4 = pow(N, 4);
    return power4;
}
void Print_Pow2(int N) {
    int power2 = N;
    cout << "Power 2 of number is: " << power2 << "\n";
}
void Print_Pow3(int N) {
    int power3 = N;
    cout << "Power 3 of number is: " << power3 << "\n";
}
void Print_Pow4(int N) {
    int power4 = N;
    cout << "Power 4 of number is: " << power4 << endl;
}

//void powerofnum234procedure(long double num) {
//    cout << fixed;
//    cout << "The pwoer 2 of number is: " << pow(num,2) << "\n";
//    cout << "The pwoer 3 of number is: " << pow(num, 3) << "\n";
//    cout << "The pwoer 4 of number is: " << pow(num, 4) << "\n";
//    cout << "The round of pwoer 2 of number is: " << round(pow(num, 2)) << endl;
//    cout << "The round of pwoer 3 of number is: " << round(pow(num, 3)) << "\n";
//    cout << "The round of pwoer 4 of number is: " << round(pow(num, 4)) << "\n";
//
//}

int main()
{
    /*long double num;
    cout << fixed;
    cout << "Enter number please:\n";
    cin >> num;
    cout << "The pwoer 2 of number is: " << num * num << "\n";
    cout << "The pwoer 3 of number is: " << num * num * num << endl;
    cout << "The pwoer 4 of number is: " << num * num * num * num << "\n";
    cout << "The round of pwoer 2 of number is: " << round(num * num) << "\n";
    cout << "The round of pwoer 3 of number is: " << round(num * num * num) << "\n";
    cout << "The round of pwoer 4 of number is: " << round(num * num * num * num) << endl;
    powerofnum234procedure(num);*/
    int N;
    Read_Number(N);
    Print_Pow2(Find_Power_2_Of_Number(N));
    Print_Pow3(Find_Power_3_Of_Number(N));
    Print_Pow4(Find_Power_4_Of_Number(N));
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
