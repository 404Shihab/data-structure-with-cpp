#include<iostream>
using namespace std;
int main ()
{
    int arr[5] = {10,20,30,40,50};  // Array of 5 integers
    int *p;

    p=&arr[0];  // Pointer p points to the first element of arr

    cout <<*p << endl;        // 10: Dereference p (value at arr[0])
    cout <<*(p++) << endl;    // 10: Print *p, then p becomes p+1 (points to arr[1])
    cout <<*p++ << endl;      // 20: Same — print *p, then p = p+1 (now points to arr[2])

    cout << arr << endl;       // Prints the address of arr[0]
    cout << *(arr) << endl;    // 10: arr behaves like a pointer → *(arr) = arr[0]

    return 0;
}
