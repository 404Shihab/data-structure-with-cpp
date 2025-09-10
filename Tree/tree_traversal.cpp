#include<iostream>
using namespace std;
class node
{
public:

    int data;
    node* left;
    node* right;

    node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(node* root)
{
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root)
{
    if(root==nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root==nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main ()
{
    node* root = new node(20);
    root->left = new node(15);
    root->right = new node(30);
    root->left->left = new node(10);
    root->left->right = new node(18);
    root->right->left = new node(25);
    root->right->right = new node(40);

    cout << "Inorder: ";
    inorder(root);
    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nPostorder: ";
    postorder(root);

    return 0;

}