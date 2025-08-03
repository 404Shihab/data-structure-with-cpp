/*
This program demonstrates different ways to declare and initialize strings,
and explains the importance of the null terminator '\0' in character arrays.
*/

#include <iostream>
using namespace std;
int main() 
{
    // 1.Declare a char array without initialization
    char a[5];      // uninitialized, contains garbage

    // 2.Declare and initialize with character list (no '\0' at end)
    char name1[5] = { 'H', 'e', 'l', 'l', 'o' };  // Not a valid C-string
    // No space for null terminator, may print garbage

    // 3.Declare and initialize with character list and manual '\0'
    char name2[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };  // Valid C-string

    // 4.Declare using string literal (auto adds '\0')
    char name3[] = "Hello";  // Automatically adds null terminator

    // Output
    cout << "name1 (no null): " << name1 << endl;
    cout << "name2 (with '\\0'): " << name2 << endl;
    cout << "name3 (string literal): " << name3 << endl;

    return 0;
}
/*
***Even though name1 prints "Hello", it's risky because there's no null terminator.
In some systems or compilers, it might print extra garbage or even crash.
Always use '\0' at the end when working with C-style strings.
*/

