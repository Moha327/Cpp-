// Circleareaaroundarbitrarytriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void Circleareaaroundarbitrarytriangleprocedure(double a, double b, double c) {

    double p = (a + b + c) / 2;
    double sqair = (a * b * c);
    double root = sqrt(p * (p - a) * (p - b) * (p - c));
    double area = ((sqair) / (4 * root));

    cout<<round(3.14 * area * area)<<'\n';
}
double Circleareaaroundarbitrarytriangle(double a, double b, double c) {

    double p = (a + b + c) / 2;
    double sqair = (a * b * c);
    double root = sqrt(p * (p - a) * (p - b) * (p - c));
    double area = ((sqair) / (4 * root));

    return round(3.14 * area * area)  ;
}
int main(){

    double a;
    double b;
    double c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double sqair = (a * b * c);
    double root = sqrt(p * (p - a) * (p - b) * (p - c));
    double area = ((sqair) / (4 * root));

    Circleareaaroundarbitrarytriangleprocedure(a, b, c);
    cout << Circleareaaroundarbitrarytriangle(a, b, c) << endl;
   
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
