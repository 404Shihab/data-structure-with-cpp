/*
This program demonstrates:
1. C-style string handling functions from <cstring>
2. C++ string class built-in functions from <string>
*/
#include <iostream>
#include <cstring>  // For C-style string functions
#include <string>   // For C++ string class
using namespace std;
int main() 
{
    // ------------------------------
    // 1. C-style String Functions
    // ------------------------------
    char s1[50]="Hello";
    char s2[50]="World";

    // strlen()
    cout << "[C-style] Length of s1: "<<strlen(s1) << endl;

    // strcpy()
    strcpy(s1,s2);  // s1 becomes "World"
    cout << "[C-style] After strcpy s1: " <<s1<< endl;

    // strcat()
    strcat(s1," C++");  // s1 becomes "World C++"
    cout << "[C-style] After strcat s1: " << s1 << endl;

    // strcmp()
    int result = strcmp(s1, s2);
    if (result == 0)
        cout << "[C-style] s1 and s2 are equal" << endl;
    else if (result < 0)
        cout << "[C-style] s1 is less than s2" << endl;
    else
        cout << "[C-style] s1 is greater than s2" << endl;


    // ------------------------------
    // 2. C++ string class functions
    // ------------------------------
    string str = "Hello";

    cout << "\n[C++ string] Length: " << str.length() << endl;  // 5
    cout << "Char at index 1: " << str.at(1) << endl;            // e
    cout << "Char at index 2: " << str[2] << endl;               // l

    str.append(" World");  // "Hello World"
    cout << "Appended Text: " << str << endl;

    str.insert(5, ";");    // "Hello; World"
    cout << "After Insert: " << str << endl;

    str.erase(5, 1);       // "Hello World"
    cout << "After Erase: " << str << endl;

    cout << "Index of 'lo': " << str.find("lo") << endl;         // 3

    return 0;
}
