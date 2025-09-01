#include<iostream>
using namespace std;

class circularQueue
{
public:
    int* arr;
    int n = 5, currentSize, front, rear;

    circularQueue()
    {
        arr = new int[n];
        currentSize = 0;
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {

        if(currentSize == n)
        {
            cout << "\nCQ Full. Can't push..";
            return;
        }

        /* if((rear + 1)%n == front )
        {
            cout << "\nCQ Full. Can't push..";
            return;
        } */

        rear = (rear+1)%n;
        arr[rear] = x;
        currentSize++;

        if(front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if(currentSize == 0)
        {
            cout << "\nCQ Empty. Can't pop.";
            return;
        }
        front = (front+1)%n;
        currentSize--;
    }
    int Peek()
    {
        if(currentSize == 0)
        {
            cout << "CQ Empty. Nothing on top.";
            return -1;
        }
        return arr[front];
    }
    void display()
    {
        cout << "\nCircular Queue: ";
        if (currentSize == 0) {
            cout << "CQ Empty";
            return;
        }


        /*while (currentSize--) {
            cout << arr[front] << " ";
            front = (front + 1) % n;
        }*/


        int count = currentSize;
        int i = front;

        while (count) {
            cout << arr[i] << " ";
            i = (i + 1) % n;
            count--;
        }
    }
};


int main ()
{

    circularQueue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(500);

    q1.display();
    cout << "\nPeek: " << q1.Peek() <<endl;

    q1.dequeue();
    q1.display();
    cout << "\nPeek: " << q1.Peek() <<endl;


    q1.enqueue(60);
    q1.display();
    cout << "\nPeek: " << q1.Peek() <<endl;

    q1.dequeue();
    q1.dequeue();
    q1.display();
    cout << "\nPeek: " << q1.Peek() <<endl;

    q1.dequeue();
    q1.display();
    cout << "\nPeek: " << q1.Peek() <<endl;

    q1.enqueue(70);
    q1.display();
    cout << "\nPeek: " << q1.Peek() <<endl;
}