#include<iostream>
using namespace std;
int main ()
{
    int r,c;
    cout << "Enter the row size: ";
    cin>>r;
    cout << "Enter the column size: ";
    cin>>c;

    // Declare a 2D array with 'r' rows and 'c' columns
    int a[r][c];

    // Input elements using nested loop
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout << "Enter element for ["<<i<<"] ["<<j<<"] : ";
            cin>>a[i][j];
        }
    }

    // Output the matrix in row-column format
    cout << "----------------------" <<endl;
    cout << "Matrix a["<<r<<"] ["<<c<<"] : " <<endl;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout <<endl;
    }
    
    return 0;
}