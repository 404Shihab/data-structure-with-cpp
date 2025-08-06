#include<iostream>
using namespace std;
struct Employee 
{
    int id;
    string name;
    double salary;

    void show() 
    {
        cout << "ID     : "<< id << endl;
        cout << "Name   : "<<name << endl;
        cout << "Salary : "<< salary << endl;
    }

    void annualSal() 
    {
        double as =12 *salary;
        cout << "Annual Salary: " <<as<< endl;
    }
};

int main() 
{
    int n;
    cout << "Enter the total number of Employees: ";
    cin>>n;

    Employee e[n];
    cin.ignore();

    for (int i=0; i<n; i++) 
    {
        cout << "\nEnter the information for Employee no. " << i+1<< ":\n";

        cout <<"Enter ID: ";
        cin >> e[i].id;
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, e[i].name);

        cout <<"Enter Salary: ";
        cin>> e[i].salary;
    }

    cout << "\n---------------------------------------\n";
    cout << "         EMPLOYEE INFORMATION          \n";
    cout << "---------------------------------------\n\n";

    for (int i=0; i<n; i++) 
    {
        cout << "Employee " << i+1<< " Information:\n";
        e[i].show();
        e[i].annualSal();
        cout << endl;
    }

    return 0;
}
