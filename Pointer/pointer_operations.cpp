#include<iostream>
using namespace std;
int main ()
{
    int x=10;
    int *p,*q;

    cout << "Initial value of x: " << x << endl;

    // Both p and q point to x
    p = &x;
    q = &x;

    cout<<"*p (value pointed by p): "<<*p<<endl;
    cout<<"*q (value pointed by q): "<<*q<<endl;

    // Modify x through pointer p
    *p=30;

    // Since q also points to x, it reflects the change
    cout <<"*q after *p = 30: "<<*q<< endl;

    // Increment x directly
    x++;
    cout << "*p after x++: " <<*p<< endl;

    // Pointer arithmetic: this moves p to next memory location (not valid for single variable!)
    *p++;  // It evaluates *p (value), then p = p + 1 (moves pointer)
    cout <<"x after *p++ (x shouldn't change): "<< x << endl;
    cout <<"*p after *p++ (undefined or garbage): "<< *p << endl;

    // Again increment p (post-increment)
    *(p++);
    cout << "*p after *(p++): (likely garbage): " << *p << endl;

    // Dereference then increment the value (invalid now because p moved past x!)
    (*p)++;   // Unsafe here — may modify random memory

    // x value remains unchanged after above invalid operations
    cout << "x after (*p)++ (still safe): " << x << endl;

    return 0;
}
