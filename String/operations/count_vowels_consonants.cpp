/*
This program takes a string input from the user
and counts how many vowels and consonants it contains.
Only lowercase and uppercase letters are considered.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100];
    int vowels=0, consonants=0;

    cout << "Enter a string: ";
    cin.getline(str, 100);  // input with spaces

    int len = strlen(str);

    for (int i=0; i<len; i++) 
    {
        char ch = tolower(str[i]);  // make lowercase for easy checking

        if ((ch >= 'a' && ch <= 'z')) 
        {  // only alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: "<< vowels << endl;
    cout << "Consonants: "<< consonants << endl;

    return 0;
}
