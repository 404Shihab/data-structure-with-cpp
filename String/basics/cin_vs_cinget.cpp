/*
This program demonstrates the difference between:
1. cin  → stops input at first space
2. cin.get() → allows full line input including spaces
*/
#include <iostream>
using namespace std;
int main() 
{
    char firstName[50];
    char fullName[80];

    // Using cin → stops at space
    cout<<"Enter your first name (cin): ";
    cin>>firstName;
    cout<<"Hello, "<<firstName<<"!"<<endl;

    cin.ignore(); // To clear newline from buffer before using cin.get()

    // Using cin.get() → allows spaces
    cout<<endl<<"Enter your full name (cin.get): ";    
    cin.get(fullName, 80);
    cout << "Hello, " << fullName << "!" << endl;

    return 0;
}
