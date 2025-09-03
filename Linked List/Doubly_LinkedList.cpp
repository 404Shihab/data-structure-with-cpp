#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node* pre;

    node(int value)
    {
        data = value;
        next = nullptr;
        pre = nullptr;
    }
};


void insertAtHead (node* &head, int value)
{
    node* newNode = new node(value);
    node* temp = head;

    newNode->next = head;

    if(head!=nullptr)
    {
        head->pre = newNode;
    }
    head = newNode;
}


void insertAtLast(node* &head, int value)
{
    node* newNode = new node(value);
    node* temp = head;
    if(head==nullptr)
    {
        insertAtHead(head, value);
        return;
    }
    while(temp->next !=nullptr)
    {
        temp= temp->next;
    }
    temp->next = newNode;
    newNode->pre = temp;
}


void deleteFromAnyPosition(node* &head, int position)
{
    node*temp = head;
    int counter = 1;
    if(position == 1)
    {
        head = head->next;
        head->pre = nullptr;
        return delete temp;
    }
    while(temp!=nullptr && counter!=position)
    {
        temp = temp->next;
        counter++;
    }
    temp->pre->next = temp->next;
    if(temp->next != nullptr)
    {
        temp->next->pre = temp->pre;
    }
    delete temp;
}

void display(node* head)
{
    node* temp = head;
    while(temp!= nullptr)
    {
        cout << temp->data << " <-> ";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}


int main ()
{
    node* head = nullptr;

    cout << "Doubly Linked List: ";
    insertAtLast(head, 20);
    insertAtLast(head, 30);
    insertAtLast(head, 40);
    insertAtLast(head, 50);
    insertAtLast(head, 60);
    insertAtLast(head, 70);
    display(head);

    cout << "Insert 10 at head: ";
    insertAtHead(head, 10);
    display(head);

    cout << "Delete from position 1: ";
    deleteFromAnyPosition(head, 3);
    display(head);

}