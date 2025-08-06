#include<iostream>
using namespace std;
int main ()
{
    int id = 100;
    float grade = 3.78;
    char ch = 'a';
    double money = 500.5644;

    void *ptr;  /*Declares a void pointer named ptr.
                 A void* can point to any type of data,
                 but must be typecasted before dereferencing.
                */

    ptr = &id;
    cout << "ID value: " << *(int*)ptr <<endl;

    ptr = &ch;
    cout << "Char value: " << *(char*)ptr <<endl;

    ptr = &money;
    cout << "Double value: " << *(double*)ptr <<endl;

    return 0;

}