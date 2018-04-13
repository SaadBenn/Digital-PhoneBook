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
                print(temp->right);
            }
        } // close method
    
    public:
    	// store data inside the nodes
    	void adder(int _data) {
        	
        	if (!root) {
        		root = new node(_data)
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


} // close class
