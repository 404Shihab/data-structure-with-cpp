#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the size of the Array: ";
    cin>>n;
    int a[n];


    //input
    for (int i=0; i<n; i++)
    {
        cout << "Enter value for a["<<i<<"] : ";
        cin>>a[i];
    }


    //output
    cout << "array["<<n<<"] : ";
    for (int i=0; i<n; i++)
    {

        cout << a[i] << " ";
    }

    return 0;
}