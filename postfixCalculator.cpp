//Hunter Vaccaro
//hpv8hf
//9/16/2019
//postfixCalculator.cpp
#include <iostream>
#include "postfixCalculator.h"
#include "Stack.h"
#include "ListNode.h"


using namespace std;

postfixCalculator::postfixCalculator(){ //default constructor
  collector = Stack();
}

void postfixCalculator::add(){ //performs addition using stack
  int x = collector.top();
  collector.pop();
  int y =collector.top();
  collector.pop();
  pushNum(y+x);
}

void postfixCalculator::sub(){ //performs substraction using stack
  int x = collector.top();
  collector.pop();
  int y =collector.top();
  collector.pop();
  pushNum(y-x);
}

void postfixCalculator::mult(){ //performs multiplication using stack
  int x = collector.top();
  collector.pop();
  int y =collector.top();
  collector.pop();
  pushNum(y*x);
}

void postfixCalculator::div(){ //performs division using stack
  int x = collector.top();
  collector.pop();
  int y =collector.top();
  if (x == 0){ //check for divisions by 0
    cout << "invalid division" << endl;
    pushNum(0);
  }
  else {
    int z = y/x;
    pushNum(z);
  }
}

void postfixCalculator::unaryNeg(){ //creates a negative number
  int y =collector.top();
  collector.pop();
  pushNum(-1*y);
}

void postfixCalculator::pushNum(int x){ //pushes onto the stack
  collector.push(x);
}

int postfixCalculator::getTopValue(){ //peeks for top value (return int).
  return collector.top();
}
