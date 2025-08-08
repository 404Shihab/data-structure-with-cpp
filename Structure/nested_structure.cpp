#include <iostream>
using namespace std;

struct Employee 
{
    char name[30]; 
    int age;       

    // Nested Structure: Address inside Employee
    struct Address 
    {
        char city[100];  
        int postalCode;  
    } add;         // Declare Address object 'add' inside Employee
} emp;             // Declare 'emp' object at the time of structure definition

int main() 
{
    // We already have 'emp' declared when defining the structure,
    // so no need to declare again like -> Employee emp;

    cout << "Enter employee name: ";
    cin.getline(emp.name, 30);

    cout << "Enter employee age: ";
    cin >> emp.age;

    cin.ignore();

    cout << "Enter city: ";
    cin.getline(emp.add.city, 100); 
    // Accessing nested structure: emp.add.city means
    // 'add' object inside 'emp' and its 'city' field

    cout << "Enter postal code: ";
    cin >> emp.add.postalCode; 
    // Accessing nested structure: emp.add.postalCode means
    // 'add' object inside 'emp' and its 'postalCode' field


    cout << "\n--- Employee Information ---- " << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Age: " << emp.age << endl;
    
    // Printing the city from nested structure
    cout << "City: " << emp.add.city << endl; 
    
    // Printing the postal code from nested structure
    cout << "Postal Code: " << emp.add.postalCode << endl; 

    return 0;
}
