#include<iostream>
using namespace std;
struct Student
{
    int id;
    double cgpa;
    string name;

    void show()
    {
        cout << "Name: " << name <<endl;
        cout << "ID: " <<id <<endl;
        cout << "cgpa: " <<cgpa <<endl;
    }

    int add (int a, int b)
    {
        int c = a+b;
        return c;
    }

};
int main ()
{
    Student s1;
    s1.name="C++ Bhuiyan";
    s1.id=404;
    s1.cgpa=4.00;

    s1.show();

    cout << s1.add(10,20) << endl;

    return 0;
}