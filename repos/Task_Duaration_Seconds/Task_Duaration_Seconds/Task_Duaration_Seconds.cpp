// Task_Duaration_Seconds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
void Task_Duaration_Second_procedure(float days, float hours, float miniutes, float seconds) {
    cout << "Total of seconds are:" << round((abs(days) * 24 * 60 * 60) + (abs(hours) * 60 * 60) + (abs(miniutes) * 60) + abs(seconds)) << "\n";
}
float Task_Duaration_Second(float days, float hours, float miniutes, float seconds) {
   return round((abs(days) * 24 * 60 * 60) + (abs(hours) * 60 * 60) + (abs(miniutes) * 60) + abs(seconds)) ;
}
int main()
{
    float days;
    float hours;
    float miniutes;
    float seconds;
    cout << "Enter number of days please:" << "\n";
    cin >> days;
    cout << "Enter number of hours please:" << endl;
    cin >> hours;
    cout << "Enter number of miniutes please:" << "\n";
    cin >> miniutes;
    cout << "Enter number of seconds please:" << "\n";
    cin >> seconds;
    cout << "Total of seconds are:" << round((abs(days) * 24 * 60 * 60) + (abs(hours) * 60 * 60) + (abs(miniutes) * 60) + abs(seconds)) << endl;
    Task_Duaration_Second_procedure(days, hours, miniutes, seconds);
    cout << "Total of seconds are:";
    cout<< Task_Duaration_Second(days, hours, miniutes, seconds)<<endl;

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
