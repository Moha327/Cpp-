// Convertseconds_to_day_hours_minitues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Convertseconds_to_day_hours_minitues(unsigned int seconds) {
    float days;
    float hours;
    float miniutes;
    cout << "Enter number of seconds please:";
    cin >> seconds;
    int reminder;
    unsigned  int secondsperday;
    unsigned  int secondsperhour;
    unsigned  int secondsperminiute;
    secondsperday = 24 * 60 * 60;
    secondsperhour = 60 * 60;
    secondsperminiute = 60;
    days = (seconds / secondsperday);
    reminder = seconds % secondsperday;
    hours = floor(reminder / secondsperhour);
    reminder = reminder % secondsperhour;
    miniutes = floor(reminder / secondsperminiute);
    reminder = reminder % secondsperminiute;
    cout << days << ":" << hours << ":" << miniutes << ":" << reminder << endl;
}
int main()
{
    unsigned int seconds;
    float days;
    float hours;
    float miniutes;
    cout << "Enter number of seconds please:";
    cin >> seconds;
    int reminder;
    unsigned  int secondsperday;
    unsigned  int secondsperhour;
    unsigned  int secondsperminiute;
    secondsperday = 24*60*60;
    secondsperhour =  60 * 60;
    secondsperminiute = 60;
    days = (seconds / secondsperday);
    reminder = seconds % secondsperday;
    hours = floor(reminder / secondsperhour);
    reminder = reminder % secondsperhour;
    miniutes = floor(reminder / secondsperminiute);
    reminder = reminder % secondsperminiute;
    cout << days << ":" << hours << ":" << miniutes <<":"<< reminder << endl;
    Convertseconds_to_day_hours_minitues(seconds);
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
