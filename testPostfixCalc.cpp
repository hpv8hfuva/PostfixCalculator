//Vaccaro HUNTER
//hpv8hf
//9/17/2019
//testPostfixCalc.cpp

#include <iostream>
#include "postfixCalculator.h"
#include "Stack.h"
#include "ListNode.h"


using namespace std;

int main() {
  postfixCalculator postfix;
  string s;
  while (cin >> s) { //reads in from a textfile
    if(s == "*"){
      postfix.mult();
    }
    else if(s == "-"){
      postfix.sub();
    }
    else if(s == "+"){
      postfix.add();
    }
    else if(s == "/"){
      postfix.div();
    }
    else if(s == "~"){
      postfix.unaryNeg();
    }
    else {
      int num = stoi(s.c_str()); //converts string into numbers
      postfix.pushNum(num);
    }
  }
  cout << postfix.getTopValue() << endl; //prints the answer
  return 0;
}
