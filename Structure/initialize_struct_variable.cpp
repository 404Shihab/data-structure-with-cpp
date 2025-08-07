#include<iostream>
using namespace std;
struct Car 
{
    string brand;
    string model;
    int year;
    double price;

    void show()
    {
        cout << "Brand: " <<brand <<endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << " BDT" << endl;
    }
};
int main ()
{
    // Initializing the struct variable
    Car c = {"Honda","civic",2020,4000000};

    c.show();

    return 0;
}