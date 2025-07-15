#include<iostream>
using namespace std; 
int main ()
{
    int arr[10] = {10,20,30,40,50};
    int E_size = 5;

    cout <<"Array before insert at beginning: ";
    for (int i=0; i<E_size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n--------------------------------------\n";

    // Shift all elements to the right by 1 position
    for (int i=E_size; i>0; i--) 
    {
        arr[i] = arr[i-1];
    }

    arr[0] = 15;  // Insert at beginning
    E_size++;

    cout << "Array after insert at beginning: ";
    for (int i=0; i<E_size; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
