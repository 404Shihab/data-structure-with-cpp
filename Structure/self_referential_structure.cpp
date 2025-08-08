/*
    A self-referential structure is a structure that contains
    a pointer to another structure of the same type.

      Key Points:
    - Allows creation of linked data structures like:
      Linked Lists, Trees, Stacks, Queues.
    - Here, 'Person' can have a 'Child' who is also a 'Person'.
*/

#include <iostream>
#include <cstring> 
using namespace std;

// Structure that points to another instance of the same structure
struct Person 
{
    char Name[30];
    Person* Child; // Pointer to a Person (self-reference)
};

int main() {
    Person P, *C; // P = parent person, C = pointer for navigation

    // Set name for parent
    strcpy(P.Name, "Arif");

    // Allocate memory for 2 children of Arif
    C = P.Child = new Person[2];

    // First child: Sara (no children)
    strcpy(C[0].Name, "Sara");
    C[0].Child = nullptr;

    // Second child: Rahim
    strcpy(C[1].Name, "Rahim");

    // Add child to Rahim -> Karim (no children)
    C = C[1].Child = new Person[1];
    strcpy(C[0].Name, "Karim");
    C[0].Child = nullptr;

    // Display family hierarchy
    cout << "Parent: " << P.Name << endl;
    cout << "  => Child 1: " << P.Child[0].Name << endl;
    cout << "  => Child 2: " << P.Child[1].Name << endl;
    cout << "       ==> Grandchild: " << P.Child[1].Child[0].Name << endl;

    return 0;
}
