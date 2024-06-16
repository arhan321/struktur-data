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
    student1.name = "Alice Smith";
    student1.age = 18;
    student1.grade = 10;
    student1.address.street = "123 Main St";
    student1.address.city = "Anytown"; 
    student1.address.state = "CA";
    student1.address.zip = 95054; 

    // Cetak
    cout << "Student Name: " << student1.name << endl;
    cout << "Address:" << endl; 
    cout << student1.address.street << endl;
    cout << student1.address.city << ", " << student1.address.state << " " << student1.address.zip << endl; 

    return 0;
}