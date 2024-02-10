#include "add.h"

int add(int a, int b)
{
  return a + b;
}

OP::OP(){}
OP::~OP(){}

ADD_OP::ADD_OP(int x):x_(x){}
ADD_OP::~ADD_OP(){}
int ADD_OP::Do(int other) const {return x_ + other;}
