#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertBst(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertBst(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = insertBst(root->right, val);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " :" << endl;
    inorder(root->right);
    
}
int main()
{
    Node *root = NULL;
    root = insertBst(root, 6);
    root = insertBst(root, 3);
    root = insertBst(root, 5);
    root = insertBst(root, 1);
    root = insertBst(root, 2);
    inorder(root);
    cout<<endl;
    return 0;
}