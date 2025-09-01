#include<iostream>
using namespace std;

class queue
{
public:
    int* arr;
    int front;
    int back;
    int n = 50;
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void enqueue(int a)
    {
        if(back == n-1)
        {
            cout << "Queue Full. No Push";
            return;
        }
        back++;
        arr[back] = a;

        if(front == -1)
        {
            front++;
        }
    }
    void dequeue ()
    {
        if(front ==-1 || front>back)
        {
            cout <<"Empty Queue. No pop..";
            return;
        }
        front++;
    }
    int peekElement()
    {
        if(front==-1 || front>back)
        {
            cout <<"Empty Queue. No pop..";
            return -1;
        }
        return arr[front];
    }
    void display()
    {
        cout <<"Queue: ";
        for(int i =front; i<=back; i++)
        {
            cout << arr[i] << " ";
        }
        cout <<endl;
    }
};

int main ()
{
    queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.display();
    cout << "Peek: " <<q1.peekElement() <<endl;

    q1.dequeue();
    q1.display();
    cout << "Peek: " <<q1.peekElement() <<endl;


    q1.dequeue();
    q1.display();
    cout << "Peek: " <<q1.peekElement() <<endl;

    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();
    cout << "Peek: " <<q1.peekElement() <<endl;

}
