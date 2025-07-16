#include<iostream>
using namespace std; 
int main ()
{
    int arr[10] = {10,20,30,40,50};
    int E_size = 5;

    cout <<"Array before delete from any position: ";
    for (int i=0; i<E_size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n--------------------------------------\n";

    int pos = 3;

    // Shift all elements to the left by 1 position from position
    for (int i=pos; i<E_size; i++) 
    {
        arr[i] = arr[i+1];
    }

    E_size--;

    cout << "Array after delete from any position: ";
    for (int i=0; i<E_size; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
