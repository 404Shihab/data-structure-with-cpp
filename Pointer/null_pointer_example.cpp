#include<iostream>
using namespace std;

int main ()
{
    int a = 10;
    int *ptr;          // Declare a pointer to int
    ptr = &a;          // Store address of variable 'a' into ptr

    // Displaying the address of 'a'
    cout << "Address stored in ptr (should match &a): " << ptr << endl;
    cout << "Address of a (&a): " << &a << endl;

    // Displaying the value at address stored in ptr
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    // ------------------------
    // NULL Pointer demonstration
    // ------------------------

    int *ptr1 = nullptr;  // Declare a null pointer

    if(ptr1 == nullptr) 
    {
        cout << "ptr1 is a Null Pointer" << endl;
    }
    else if(ptr == nullptr) 
    {
        cout << "ptr is a Null Pointer" << endl;
    }
    else 
    {
        cout << "Neither is Null Pointer" << endl;
    }

    // Reassign ptr1 to point to variable 'b'
    int b = 20;
    ptr1 = &b;

    cout << "After pointing ptr1 to variable b:" << endl;
    cout << "Address stored in ptr1: " << ptr1 << endl;
    cout << "Value at ptr1 (*ptr1): " << *ptr1 << endl;

    return 0;
}
