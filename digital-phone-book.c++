#include <iostream>

using namespace std;

class BinaryTree {
    
    private:
        // get our node struct as private so that only this class can access it
        struct node {
            int data;
            node* left;
            node* right;
            // constructor for node
            node(int _data) : data(_data), left(NULL), right(NULL) {};
        };
        // get a root node for our BST
        node* root;
    
        // print function private to our BST class as we don't allow access to our nodes from outside
        void print(node* temp) {
            if (temp->left) {
                print(temp->left);
            }
            cout<<temp->data<<" ";
            if (temp->right) {
                print(temp->right)
            }
        }
}
