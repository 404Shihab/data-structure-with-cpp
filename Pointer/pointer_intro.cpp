#include <iostream>
using namespace std;

int main()
{
    int x=10;          // Declare an integer variable
    int *p;            // Declare a pointer to int

    p=&x;            // Store the address of x in pointer p

    // Print the address of x directly
    cout<<"Address of variable x (&x): "<<&x << endl;

    // Print the address of x using the pointer (should be same as &x)
    cout<<"Address stored in pointer p (p): "<<p<< endl;

    // Print the address of pointer variable p itself (its own memory location)
    cout <<"Address of pointer variable p (&p): " << &p << endl;

    // Print the value of x using dereferencing
    cout <<"Value of x using pointer (*p): " << *p << endl;

    // Change the value of x and access again using pointer
    x = 20;
    cout << "\nAfter changing x to 20:" << endl;
    cout << "Value of x using pointer (*p): "<<*p<< endl;

    // Declare double pointer (pointer to pointer)
    int **q;
    q =&p;

    cout << "\nDouble Pointer Operations:" <<endl;
    cout << "Address of double pointer variable q (&q): "<< &q << endl;
    cout << "Value stored in q (i.e., address of p): "<< q << endl;
    cout << "Value pointed by q (*q i.e., address of x): "<< *q << endl;
    cout << "Value pointed by *q (**q i.e., value of x): "<< **q << endl;

    return 0;
}