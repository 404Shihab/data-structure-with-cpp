#include<iostream>
using namespace std;

int main ()
{
    int row = 3, col = 3;
    int array[3][3];

    cout << "Enter a 3x3 matrix:\n";
    for (int i =0; i<row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose Matrix:\n";
    for(int j=0; j<col; j++)
    {
        for (int i=0; i<row; i++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
