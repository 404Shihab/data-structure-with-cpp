#include <iostream>
using namespace std;
int main() 
{
    //First way: flat initialization (fills row by row)
    int a1[3][3] = {1, 2, 3,4, 5, 6,7, 8, 9};

    //Second way: nested braces
    int a2[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

    //Third way: vertical style for readability
    int a3[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //Access and print specific values (no loops)
    cout << "a1[2][2] = " << a1[2][2] << endl;  // 9
    cout << "a2[1][2] = " << a2[1][2] << endl;  // 6
    cout << "a3[0][1] = " << a3[0][1] << endl;  // 2

    return 0;
}
