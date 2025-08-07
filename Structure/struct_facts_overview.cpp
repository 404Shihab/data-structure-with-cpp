#include <iostream>
using namespace std;

// Structure Definition (template only, no memory allocated yet)
struct EmployeeRecord 
{
    string name;
    int age;
    double salary;

    // Show function to print member values
    void show() 
    {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Salary : " << salary << " BDT" << endl;
    }
};

// Overloading '==' operator to compare two EmployeeRecord objects
bool operator==(EmployeeRecord a, EmployeeRecord b) 
{
    // Only comparing age for this example
    return a.age == b.age;
}

int main() 
{
    //  Memory is allocated only when we create instances/variables of struct
    EmployeeRecord a = {"java khan", 25, 50000};
    EmployeeRecord b = {"c++ bhuiyan", 25, 60000};

    //  Member-wise access and assignment
    a.age=b.age; // Valid: both are integers
    a.salary=b.salary; // Valid: both are doubles

    //  Arithmetic/logical operations directly on structs are not allowed
    // Example: a + b;   Invalid
    // Example: a == b;  Now valid due to operator overloading

    //  Assignment operation between struct variables
    EmployeeRecord c;
    c=b; // Copy all data from b to c

    //  Using struct in function calls just like basic types
    a.show();
    cout << endl;
    b.show();
    cout << endl;
    c.show();

    //  Using overloaded operator
    if (a==b) 
    {
        cout <<"\n a and b are equal in age.\n";
    } 
    else 
    {
        cout <<"\n a and b are not equal in age.\n";
    }

    return 0;
}
