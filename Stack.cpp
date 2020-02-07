//Hunter Vaccaro
//hpv8hf
//09/03/2019
//Stack.cpp

#include <iostream>
#include "Stack.h"
#include "ListNode.h"
using namespace std;

Stack::Stack() { //default constructor
  head = new ListNode();
  tail = new ListNode();
  head ->next = tail;
  tail ->next =  NULL;
  count = 0;
}

Stack::~Stack() { //destructor
  while(!empty()){
    pop();
  }
}

bool Stack::empty() const { //check if stack is empty
  if(count == 0)
    return true;
  return false;
}

void Stack::push(int x) { //adds an element onto the top of the stack
  ListNode *after = new ListNode();
  after -> value = x;
  after -> next = head-> next;
  head->next=after;
  count++;
}
void Stack::pop() { //removes an element from the top of the stack
  if(!empty()) {
    ListNode *x = head->next;
    head -> next = x -> next;
    count--;
    delete x;
  }
  else{ //if its empty then displays an error.
    cout << "The stack is empty, invalid postfix" << endl;
  }
}
int Stack::top() { // return the value at the top of the stack
  if(!empty()){
    int x = head->next->value;
    return x;
  }
  else{ //display empty when stack is empty
    cout << "Empty List" << endl;
    return 0;
  }
}

