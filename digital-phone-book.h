#ifndef phonebook_h
#define phonebook_h

#include <iostream>
using namespace std;

class BinaryTree {
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
    
    void print(node* temp);
    
    public:
    BinaryTree();
    void adder(int _data);
    int nodeCount(int _data);
    void print();
};
#endif
