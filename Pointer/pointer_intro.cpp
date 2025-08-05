#include <iostream>
using namespace std;
int main()
{
    int x=10;         // Declare an integer variable
    int *p;             // Declare a pointer to int

    p=&x;             // Store the address of x in pointer p

    // Print the address of x directly
    cout<<"Address of variable x (&x): " <<&x<<endl;

    // Print the address of x using the pointer (should be same as &x)
    cout<<"Address stored in pointer p (p): " <<p<<endl;

    // Print the address of pointer variable p itself (its own memory)
    cout<<"Address of pointer variable p (&p): " <<&p<<endl;

    // Print the value of x using dereferencing
    cout<<"Value of x using pointer (*p): " <<*p<<endl;

    return 0;
}
