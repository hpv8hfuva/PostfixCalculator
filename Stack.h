//Hunter Vaccaro
//hpv8hf
//9/17/2019
//Stack.h

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "ListNode.h"
using namespace std;

// When reading in ListItr.h first, it starts reading in this file
// before declaring that ListItr is a class.  This file then include
// ListItr.h, but beacuse of the #ifndef LISTITR_H statement, the code
// in that file is not read.  Thus, in this case, this List.h file
// will be read in, and will not know that ListItr is a class, which
// will cause compilation problems later on in this file.  Got it?
// Isn't C++ fun???

class Stack {
public:
    Stack();				//Constructor
    ~Stack();			//Destructor
    bool empty() const;		//Returns true if empty; else false
    void push(int value);
    void pop();	       
    int top() ; //Returns the number of elements in the list
    
    ListNode *head, *tail;
    int count;
};

#endif
