//Topic: Array Initialization (inline and manual)
#include <iostream>
using namespace std;
int main()
{
    // Inline Initialization--
    int a[5] = {10, 20, 30, 40, 50};

    //Manual Initialization
    int b[3];
    b[0] = 99;
    b[1] = 100;
    b[2] = 101;

    //Output of array a
    cout << "Array a (inline initialized): ";
    for (int i = 0; i < 5; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;

    //Output of array b
    cout << "Array b (manually initialized): ";
    for (int i = 0; i < 3; i++) 
    {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
