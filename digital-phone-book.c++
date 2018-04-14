#include "digital-phone-book.h"

BinaryTree::BinaryTree() {
    root = NULL;
}
// print function private to our BST class as we don't allow access to our nodes from outside
void BinaryTree::print(node* temp) {
    if (temp->left) {
        print(temp->left);
    }
    cout<<temp->data<<" ";
    if (temp->right) {
        print(temp->right);
    }
} // close method

// store data inside the nodes
void BinaryTree::adder(int _data) {
    if (!root) {
        root = new node(_data);
    } else {
        // node that will walk through the BST
        node* walker = root;
        
        while (walker) {
            if (_data < walker->data) {
                
                if (walker->left) {
                    walker = walker->left;
                } else {
                    walker->left = new node(_data);
                    walker = NULL;
                }
            } else {
                if (walker->right) {
                    walker = walker->right;
                } else {
                    walker->right = new node(_data);
                    walker = NULL;
                }
            }
        }
        
    }
} // close method

// add a method to count the number of nodes visited
int BinaryTree::nodeCount(int _data) {

    // counter
    int count = 0;
    node* walker = root;

    while (walker) {
        if (_data == walker->data) {
            return count;
        } else {
            walker = (_data < walker->data) ? walker->left : walker->right;
            count++;
        }
    } // end while

    // nothing found so return -1 to indicate that.
    return -1;
}

void BinaryTree::print() {
    cout<<"Printing binary tree:"<<endl<<"[ ";
    print(root);
    cout<<"]"<<endl;
}
