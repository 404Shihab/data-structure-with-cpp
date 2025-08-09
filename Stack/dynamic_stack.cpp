#include<iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int topElement;
    int capacity = 5;

    Stack() 
    {
        arr = new int[capacity];
        topElement = -1;
    }

    // Function to resize the stack if it's full
    void resize() 
    {
        int newCapacity = capacity * 2;
        int* newArr = new int[newCapacity];
        //passing the elements of previous array to the new array
        for (int i = topElement; i >= 0; i--) {
            newArr[i] = arr[i];
        }
        //delete[] arr;
        arr = newArr;
        capacity = newCapacity;
        cout << "Stack resized to capacity " << capacity << endl;
    }

    void push(int value) 
    {
        if (topElement == capacity - 1) 
        {
            resize(); // Resize stack if it's full
        }
        topElement++;
        arr[topElement] = value;
        //cout << value << " pushed to stack." << endl;
    }

    void pop() 
    {
        if (topElement == -1) 
        {
            cout << "Stack is empty. Nothing to pop." << endl;
            return;
        }
        //cout << arr[topElement] << " popped from stack." << endl;
        topElement--;
    }



    int top() 
    {
        if (topElement == -1) 
        {
            cout << "Stack is empty. No top element." << endl;
            return -1;
        }
        return arr[topElement];
    }

    void display() 
    {
        if (topElement == -1) 
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = 0; i <= topElement; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Stack() 
    {
        delete[] arr;
    }
};

int main() 
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();

    cout << endl;
    s.push(60); // Will trigger resizing
    s.display();
    cout << "Top Element: " << s.top() << endl;


    cout << endl;
    s.pop();
    s.pop();
    s.display();
    cout << "Top Element: " << s.top() << endl;
}