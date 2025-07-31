#include <iostream>
using namespace std;
int main() 
{
    int a[3][3];

    // Input a 3x3 matrix
    cout << "Enter elements for a 3x3 matrix:" << endl;
    for (int i=0; i<3; i++) 
    {
        for (int j=0; j<3; j++) 
        {
            cout <<"Enter a[" <<i<< "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    int primaryDiaSum = 0;
    int secondaryDiaSum = 0;

    for (int i=0; i<3; i++) 
    {
        primaryDiaSum += a[i][i];                  // Elements like a[0][0], a[1][1], a[2][2]
        secondaryDiaSum += a[i][3-1-i];            // Elements like a[0][2], a[1][1], a[2][0]
    }

    cout << "Primary diagonal sum: " << primaryDiaSum << endl;
    cout << "Secondary diagonal sum: " << secondaryDiaSum << endl;

    return 0;
}
