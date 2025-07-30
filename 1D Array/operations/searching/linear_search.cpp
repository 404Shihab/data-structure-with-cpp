#include<iostream>
using namespace std;
int linearSearch(int a[], int E_size, int search)
{
    for (int i=0; i<E_size; i++)
    {
        if (a[i]==search)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[10] = {15,78,230,47,-1,-965,22};
    int E_size = 7;
    int search = 100;

    int index = linearSearch(a, E_size, search);

    if (index !=-1)
    {
        cout << "Element "<<search<<" is found at index "<<index<<endl;
    }
    else
    {
        cout << "Element "<<search<<" is not found" << endl;
    }

    return 0;
}