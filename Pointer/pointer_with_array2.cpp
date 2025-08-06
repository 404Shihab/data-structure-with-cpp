#include<iostream>
using namespace std;
int main ()
{
    float r[5] = {22.5,34.8,46.8,59.1,68.3};
    cout <<"1st element: "<< r[0]<<"\n";
    cout <<"1st element: "<< *r <<"\n";
    cout <<"1st element: "<< *(r)<<"\n";
    cout <<"3rd element: "<< r[2] <<"\n";
    cout <<"3rd element: "<< *(r+2)<<"\n";

    // Displaying addresses
    cout <<endl;
    cout << "1st Element Address: " << &r[0] << "\n";
    cout << "3rd Element Address: " << &r[2] << "\n";

    cout <<endl;
    float *p;
    p = r; //&r[0]
    cout <<"1st element: "<< p[0] <<"\n";
    cout <<"1st element: "<< *p <<"\n";
    cout <<"3rd element: "<< p[2]<<"\n";
    cout <<"3rd element: "<< *(p+2)<<"\n";

    // Displaying addresses via pointer
    cout <<endl;
    cout << "Address of *p variable: " << &p << "\n";
    cout << "Address of p (points to r[0]): " << p << "\n";
    cout << "Address of p+2 (points to r[2]): " << (p+2) << "\n";


    cout <<endl;
    for(int i=0; i<5; i++, p++)
    {
        cout <<"Element "<<(i+1)<<" is: "<<*p<<"\n";
    }
}
