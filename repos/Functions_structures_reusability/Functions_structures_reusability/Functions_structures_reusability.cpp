// Functions_structures_reusability.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


struct strcar {
    string name;
    string model;
    string color;
};
struct straddress {
    string street;
    unsigned short int buildno;
    string city;
    string country;

};

struct strPersonalInfo {
    string id;
    string birthdate;
    string email;
    unsigned short int monthlysalary;
};
struct strInfo {
    string FirstName;
    string LastName;
    unsigned short int Age;
    string Phone;
    straddress Address;
    strcar Car;
    strPersonalInfo PersonInformation;
};

void readpersonalinfo(strInfo &info) {
    cout << "Enter id:\n";
    cin >> info.PersonInformation.id;
    cout << "Enter birthdate:\n";
    cin >> info.PersonInformation.birthdate;
    cout << "Enter email:\n";
    cin >> info.PersonInformation.email;
    cout << "Enter monthly salary:" << "\n";
    cin >> info.PersonInformation.monthlysalary;
}
void readInfo(strInfo &info) {
    strInfo Info;
    cout << "Enter FirstName:"<<endl;
    cin >> info.FirstName;
    cout << "Enter LastName:\n";
    cin >> info.LastName;
    cout << "Enter Age:\n";
    cin >> info.Age;
    cout << "Enter Phone:\n";
    cin >> info.Phone;
    cout << "Enter street:\n";
    cin.ignore(1, '\n');
    getline(cin, info.Address.street);
    cout << "Enter buildno:"<<endl;
    cin >> info.Address.buildno;
    cout << "Enter city:\n";
    cin >> info.Address.city;
    cout << "Enter country:\n";
    cin >> info.Address.country;
    cout << "Enter car name:\n";
    cin >> info.Car.name;
    cout << "Enter car model:\n";
    cin >> info.Car.model;
    cout << "Enter car color:"<<endl;
    cin >> info.Car.color;
    readpersonalinfo(info);
}

void printpersoninfo(strInfo info) {
    cout << "id: " << info.PersonInformation.id << "\n";
    cout << "Birthdate: " << info.PersonInformation.birthdate << "\n";
    cout << "Email: " << info.PersonInformation.email << "\n";
    cout << "Monthlysalaryl: " << info.PersonInformation.monthlysalary << "\n";
}
void printinfo(strInfo info) {
    cout << "FirstName: " << info.FirstName<<endl;
    cout << "LastName: " << info.LastName << "\n";
    cout << "Age: " << info.Age << "\n";
    cout << "Phone: " << info.Phone << "\n";
    cout << "Street: " << info.Address.street << "\n";
    cout << "Buildno: " << info.Address.buildno << endl;
    cout << "City: " << info.Address.city << "\n";
    cout << "Country: " << info.Address.country << "\n";
    cout << "Car color: " << info.Car.color << "\n";
    cout << "Car name: " << info.Car.name << "\n";
    cout << "Car model: " << info.Car.model << endl;
    printpersoninfo(info);
}
int main()
{
    strInfo Person1info;
    readInfo(Person1info);
    printinfo(Person1info);
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
