//Hunter Vaccaro
//hpv8hf
//9/16/2019
//postfixCalculator.h
#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <iostream>
#include "Stack.h"
#include "ListNode.h"
using namespace std;

class postfixCalculator{
 public:
  postfixCalculator(); //default constructor
  void add();
  void sub();
  void mult();
  void div();
  void unaryNeg(); // negations
  void pushNum(int x); // "push"
  int getTopValue(); // "peek"

  Stack collector;
    
};
#endif
