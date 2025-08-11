/*
Problem Statement:
Write a program to input a 3×3 matrix. Search for a given element and display whether it is even, odd, or not found in the matrix.
*/ 

#include<iostream>
using namespace std;
int main ()
{
    int row = 3, col = 3;
    int array[3][3];

    cout << "Enter a 3x3 matrix: ";
    for (int i =0; i<row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            cin >> array[i][j];
        }
    }

    int search;
    cout << "\nEnter search element: ";
    cin >> search;

    bool found=false;

    for(int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            if(array[i][j] == search)
            {
                found = true;
                cout << "Element " << search << " found at index ["<< i <<"]["<< j <<"]\n";
                if(search % 2 == 0)
                    cout << "It is EVEN\n";
                else
                    cout << "It is ODD\n";
                break;
            }
        }
        if(found) break;
    }

    if(!found)
        cout <<"Element "<<search<<" is NOT found in the matrix.\n";

    return 0;
}
