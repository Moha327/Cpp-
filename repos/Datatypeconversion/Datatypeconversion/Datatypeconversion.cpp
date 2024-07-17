// Datatypeconversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num1;
    double num2 = 19.99;
    num1 = int(num2);
    cout << num1<<" "<<num2<< "\n";

    string str = "123.456";
    int num_int = stoi(str);
    float num_float = stof(str);
    double num_double = stod(str);

    cout << num_int << "\n";
    cout << num_float << "\n";
    cout << num_double << endl;

    /*int Num1 = 123;
    double Num2 = 18.99;
    string st1, st2,st3;
    st1 = to_string(Num1);
    st2 = to_string(Num2);
    st3 = st1 + st2;
    cout << st3 << endl;*/

    string st1 = "43.22";
    int st1_int = stoi(st1);
    float st1_float = stof(st1);
    double st1_double = stod(st1);

    cout << st1_int << "\n";
    cout << st1_float << "\n";
    cout << st1_double << "\n";

    unsigned short int N1 = 20;
    string N1_to_string = to_string(N1);

    cout << N1_to_string << endl;

    double N2 = 20.99;
    string N2_to_string = to_string(N2);

    cout << N2_to_string << "\n";

    float N3 = 55.23;
    string N3_to_string = to_string(N3);

    cout << N3_to_string << "\n";

    int N3_cstyle = (int)N3;
    int N3_functionint = int(N3);
    int N3_explicit_int;
    N3_explicit_int = N3_cstyle;

    cout << N3_functionint << "\n";
    cout << N3_functionint << "\n";
    cout << N3_explicit_int << endl;

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
