#include <iostream>
using namespace std;
int main() 
{
    char string1[] = {'H','e','l','l','o'};     // Not a proper C-string
    char string2[] = "Hello";                      // Proper C-string with '\0'

    cout<<"String 1 (char array): "<<string1<<endl;  // May print garbage after
    cout<<"String 2 (string): "<<string2<<endl;      // Prints correctly

    return 0;
}
