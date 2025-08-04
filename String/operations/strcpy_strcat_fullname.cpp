#include <iostream>
#include <cstring>
using namespace std;
int main() 
{

    char firstName[50];
    char middleName[50];
    char lastName[50];
    char fullName[200];

    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter Middle Name: ";
    cin >> middleName;
    cout << "Enter Last Name: ";
    cin >> lastName;

    strcpy(fullName, firstName); // this is strcpy not strcat
    strcat(fullName, " ");
    strcat(fullName, middleName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    cout << "Full Name: " << fullName << endl;

    return 0;
}

