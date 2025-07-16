#include<iostream>
using namespace std; 
int main ()
{
    int arr[10] = {10,20,30,40,50};
    int E_size = 5;

    cout <<"Array before delete from end: ";
    for (int i=0; i<E_size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n--------------------------------------\n";

    
    E_size--;

    cout << "Array after delete from end: ";
    for (int i=0; i<E_size; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
