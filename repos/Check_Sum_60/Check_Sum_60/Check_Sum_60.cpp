// Check_Sum_60.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int PrintSumOfNumbers(int& number) {
    int sum = 0;
    int n1;
    cout << "Enter size:\n";
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cout << "please enter number\n";
        cin >> number;
        if (sum + number > 60) {

            continue;
        }
        else if (sum + number < 60) {
            sum += number;
            
        }
        else {
            sum += number;
            break;
        }
    }
    return sum;
}
int main() {
    // Write C++ code here
    int number;
    cout << PrintSumOfNumbers(number);

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
