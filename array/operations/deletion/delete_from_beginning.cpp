#include<iostream>
using namespace std; 
int main ()
{
    int arr[10] = {10,20,30,40,50};
    int E_size = 5;

    cout <<"Array before delete from beginning: ";
    for (int i=0; i<E_size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n--------------------------------------\n";

    // Shift all elements to the left by 1 position
    for (int i=0; i<E_size; i++) 
    {
        arr[i] = arr[i+1];
    }

    E_size--;

    cout << "Array after delete from beginning: ";
    for (int i=0; i<E_size; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
