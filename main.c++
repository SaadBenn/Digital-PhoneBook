//
//  main.cpp
//  phone book
//
//  Created by Saad.
//  Copyright © 2018 Saad . All rights reserved.
//

#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "digital-phone-book.h"

#define HUNDREDKPEOPLE 100000

int main(int argc, char const *argv[])
{
    // to prevent sequence repetition between runs
    srand(time(NULL));
    int numberToFind = -1;
    int randomPlacement = rand()%100000;
    
    BinaryTree binaryTree;
    
    for (int i = 0; i < HUNDREDKPEOPLE; ++i)
    {
        int randomNumber = 204*10000000+(rand()%900 +100)*1000+rand()%9000+1000;
        
        if (i == randomPlacement) {
            numberToFind = randomNumber;
        }
        
        binaryTree.adder(randomNumber);
    } // end for
    
    // print the phone numbers
    binaryTree.print();
    // look for the random phone number
    cout<<endl<<"Looking for "<<numberToFind<<"..."<<endl;
    // how long did it take to find the number?
    cout<<"Found after "<<binaryTree.nodeCount(numberToFind)<<" traversals."<<endl;
    
    return 0;
}
