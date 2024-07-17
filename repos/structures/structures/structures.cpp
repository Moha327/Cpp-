// structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


struct Myaddress {
    string address;
};

struct Myphone {
    string phone_brand;
    string phone_model;
    string phone_operating_system;
};

struct Information {
    unsigned int id;
    unsigned int phone;
    Myphone phone1;
}; 

struct Person {
    string name;
    unsigned short int age;
    string city;
    string country;
    unsigned short int monthly_salary;
    char gender;
    unsigned short int married = 0;
    Myaddress myaddress1;
    Information information;
};

int main()
{
    Person Myperson1;
    Myperson1.name = "Mohammed Hammouz";
    Myperson1.age = 29;
    Myperson1.city = "Nablus";
    Myperson1.country = "Palestine";
    Myperson1.monthly_salary = 2000;
    Myperson1.gender = 'M';
    Myperson1.married = 0;
    Myperson1.myaddress1.address = "Asserastreet";
    Myperson1.information.id = 12345789;
    Myperson1.information.phone = 0555555555555555;
    Myperson1.information.phone1.phone_brand = "Xiomi";
    Myperson1.information.phone1.phone_model = "Redmi";
    Myperson1.information.phone1.phone_operating_system = "Android";

    cout << "************************\n";
    cout << "My name is: " << Myperson1.name <<"\n";
    cout << "My age is: " << Myperson1.age << "\n";
    cout << "City is: " << Myperson1.city << "\n";
    cout << "Country is: " << Myperson1.country << endl;
    cout << "My monthly_salary is: " << Myperson1.monthly_salary << "\n";
    cout << "My yearly_salary is: " << Myperson1.monthly_salary*12 << "\n";
    cout << "gender: " << Myperson1.gender << "\n";
    cout << "married 1/0: " << Myperson1.gender << "\n";
    cout << "My address: " << Myperson1.myaddress1.address << endl;
    cout << "My id: " << Myperson1.information.id << "\n";
    cout << "My phone's brand: " << Myperson1.information.phone1.phone_brand << "\n";
    cout << "My phone's model: " << Myperson1.information.phone1.phone_model << "\n";
    cout << "My phone's operating system: " << Myperson1.information.phone1.phone_operating_system << "\n";
    cout << "************************" << endl;
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
