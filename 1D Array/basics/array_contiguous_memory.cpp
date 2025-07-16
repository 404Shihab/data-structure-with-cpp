#include<iostream>
using namespace std;
int main ()
{
    int arr[5] = {78,56,10,20,96};

    cout << "Array element addresses in HEX format: " <<endl;

    for (int i=0; i<5; i++)
    {
        cout << &arr[i] << endl;
    }

    cout << "Array element addresses as INTEGER values: " <<endl;

    for (int i=0; i<5; i++)
    {
        cout << (int)&arr[i] << endl;
    }

    /*
    - Array elements stored in contiguous memory locations.
    - 'int' usually takes 4 bytes, so addresses increase by 4.
    - 'long long int' usually takes 8 bytes, so addresses increase by 8.
    - Printing addresses in HEX shows memory location.
    - Printing addresses as INT (decimal) helps understand byte difference easily.
    */


    long long int arr1[5];
    cout << "long long int array element addresses in HEX format: "<<endl;
    for (int i=0; i<5; i++)
    {
        cout << &arr1[i] <<endl;
    }

    cout << "long long int array element addresses as INTEGER values: " <<endl;
    for (int i=0; i<5; i++)
    {
        cout << (int)&arr1[i] <<endl;
    }
    
    return 0;
}