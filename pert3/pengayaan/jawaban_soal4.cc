#include <iostream>
using namespace std;

struct Address {
    string street;
    string city;
    string state;
    int zip;
};

struct Student {
    string name;
    int age;
    int grade;
    Address address;
};

int main() {
    Student student1;
    
    // Input data dari user
    cout << "Enter student's name: ";
    getline(cin, student1.name);
    cout << "Enter student's age: ";
    cin >> student1.age;
    cout << "Enter student's grade: ";
    cin >> student1.grade;
    cin.ignore();
    cout << "Enter student's address:" << endl;
    cout << "Street: ";
    getline(cin, student1.address.street);
    cout << "City: ";
    getline(cin, student1.address.city);
    cout << "State: ";
    getline(cin, student1.address.state);
    cout << "Zip: ";
    cin >> student1.address.zip;

    // Cetak
    cout << "Student Name: " << student1.name << endl;
    cout << "Address:" << endl; 
    cout << student1.address.street << endl;
    cout << student1.address.city << ", " << student1.address.state << " " << student1.address.zip << endl; 

    return 0;
}