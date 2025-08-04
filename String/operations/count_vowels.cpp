/*
Write a program to count and print the number of vowels in a manually 
initialized character array. Traverse the array and check for vowels using conditional statements.
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() 
{
    char str[100] = {'a', 'b', 'c', 'd', 'e', 'o', 'k', 'x', 'u', 'l'};
    int vowels = 0;
    int size = sizeof(str)/sizeof(char);

    for (int i = 0; i < size; i++) 
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
           vowels++;
        }
    }
    cout << "Vowels: " << vowels;
    cout <<endl;
}

