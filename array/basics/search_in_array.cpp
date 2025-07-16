#include<iostream>
using namespace std;
int main ()
{
    int arr[10] = {45,7,56,78,10,-9,693,15,3,99};
    int E_size=10;

    int n;
    cout << "Enter the number to be searched: ";
    cin>>n;
    
    int flag=0;
    int idx=0;
    
    // Linear Search
    for (int i=0; i<E_size; i++)
    {
        if (arr[i]==n)
        {
            flag = 1;
            idx=i;
            break;
        }
    }

    if (flag==1)
    {
        cout << n << " was found in the index " <<idx<< " of the array." <<endl;
    }
    else
    {
        cout << n <<" was not found in the array." <<endl;
    }
    return 0;
}