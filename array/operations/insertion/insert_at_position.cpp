#include<iostream>
using namespace std; 
int main ()
{
    int arr[10] = {10,20,30,40,50};
    int E_size = 5;

    cout << "Array before insert at any position: ";
    for (int i=0; i<E_size; i++) 
    {
        cout <<arr[i]<< " ";
    }
    cout << "\n--------------------------------------\n";

    int pos=2; // Insert at index 2
    int value=500;

    // Shift elements to the right starting from the end to pos
    for (int i=E_size; i>pos; i--) 
    {
        arr[i] = arr[i-1];
    }

    arr[pos]=value;  // Insert value at desired position
    E_size++;

    cout << "Array after insert at position: ";
    for (int i=0; i<E_size; i++)
    {
        cout <<arr[i]<< " ";
    }

    return 0;
}
