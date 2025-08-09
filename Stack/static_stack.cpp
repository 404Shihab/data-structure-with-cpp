#include<iostream>
using namespace std;

class stack
{
public:
    int* arr;           // Pointer to dynamically allocated array to hold stack elements
    int topElement;     // Index of the top element in the stack
    int n = 6;          // Maximum capacity of the stack

    stack()
    {
        arr = new int[n];    
        topElement = -1;    
    }


    void push(int a)
    {

        if(topElement == n-1)
        {
            cout <<"Stack overflow..." <<endl;
            return;
        }
        topElement++;         
        arr[topElement] = a;  
    }


    void pop()
    {
        // Check if stack is empty
        if(topElement == -1)
        {
            cout << "Stack empty. Nothing to pop" <<endl;
            return;          
        }
        topElement--;     
    }


    int top()
    {
        if(topElement == -1)
        {
            cout << "Stack empty. No top element" <<endl;
            return -1;   
        }
        return arr[topElement]; 
    }

    // Function to display all elements in the stack from top to bottom
    void display()
    {

        if(topElement == -1)
        {
            cout << "Stack Empty!!!!" <<endl;
            return;
        }

        cout << "Stack: ";
        // Loop from top element down to the bottom element
        for(int i = topElement; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout <<endl;
    }
};

int main ()
{
    stack s;          // Create a stack object

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    s.display();      
    cout << "Top Element: "<<s.top() <<endl;  
    cout <<endl;
    s.pop();      
    s.display();
    cout << "Top Element: "<<s.top() <<endl;

    cout <<endl;
    s.pop();          
    s.pop();
    s.pop();
    s.display();
    cout << "Top Element: "<<s.top() <<endl;

    cout <<endl;
    s.pop();
    s.pop();
    s.display();      // Stack should be empty now
    cout << "Top Element: "<<s.top() <<endl;
}