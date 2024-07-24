// switch_case_simple_calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enoperation { multiply = 1,divide=2,addition=3,subtract=4 };

void ShowOperationMenue() {
    cout << "*******************\n" ;
    cout << "Operation types\n";
    cout << "*******************\n" ;
    cout << "(1) multiply\n";
    cout << "(2) divide\n";
    cout << "(3) addition\n" ;
    cout << "(4) subtract\n";
    cout << "Enter operation type:\n";
}

enoperation ReadOperation() {
    int operation;
    cin >> operation;
    return (enoperation)operation;
}
void ReadNums(int& nums1, int& nums2) {
    cout << "Enter nums1:\n";
    cin >> nums1;
    cout << "Enter nums2:\n";
    cin >> nums2;
}
int Readnums(enoperation Operation) {
    int nums1;
    int nums2;
    ReadNums(nums1, nums2);
    switch (Operation) {

    case enoperation::addition:
        return nums1 + nums2;
        break;
    case enoperation::divide:
        return (float)nums1 / nums2;
        break;

    case enoperation::multiply:
        return nums1 * nums2;
        break;
    case enoperation::subtract:
        return nums1 - nums2;
        break;
    default:
        return ReadOperation();
    }
    
}
    

int main()
{
    ShowOperationMenue();
    cout << Readnums(ReadOperation())<<endl;

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
