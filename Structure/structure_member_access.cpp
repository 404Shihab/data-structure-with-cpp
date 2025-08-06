#include <iostream>
#include <cstring>
using namespace std;

struct Employee 
{
    char name[5];
    int age;        
    float salary;  
};

int main() 
{

    Employee x;      
    Employee y[5];      
    Employee *p;

    x.salary = 1234.56;
    strcpy(x.name, "Sam");
    x.age = 22;

    y[2].age = 23;

    // Pointer 'p' now points to variable 'x'
    p = &x;

    // Access and modify x's age using pointer and arrow (->) operator
    p->age = 25;            // Equivalent to x.age = 25


    cout << "Size of structure: " << sizeof(Employee) << " bytes" << endl;
    cout << endl;
    cout << "Name: " << x.name << endl;
    cout << "Salary: " << x.salary << endl;
    cout << "Age (from y[2]): " << y[2].age << endl;
    cout << "Age Updated (from x): " << x.age << endl;

    return 0;
}
