#include <iostream>
using namespace std;

struct Employee 
{
    char name[30]; 
    int age;      

    // Nested Structure: Address (inside Employee, but no object created here)
    struct Address 
    {
        char city[100];  
        int postalCode;
    };
};

int main() 
{

    Employee emp;            // Create an Employee object
    Employee::Address add;   // Create an Address object separately (scope resolution)

    cout << "Enter employee name: ";
    cin >> emp.name; // Takes only the first word (no spaces)

    cout << "Enter employee age: ";
    cin >> emp.age;

    cin.ignore(); 

    cout << "Enter city: ";
    cin.getline(add.city, 30); 
    // Here 'add.city' means the 'city' field from the separate Address object

    cout << "Enter postal code: ";
    cin >> add.postalCode;
    // Here 'add.postalCode' means the 'postalCode' field from the separate Address object


    cout << "\n--- Employee Information ---- " << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Age: " << emp.age << endl;
    cout << "City: " << add.city << endl;              // Accessing city from 'add' object
    cout << "Postal Code: " << add.postalCode << endl; // Accessing postal code from 'add' object
}
