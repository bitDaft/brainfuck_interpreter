/**
* @Author: Tausif Ali
* @Date:   21-Feb-2017
* @Email:  anodecode@gmail.com
* @Filename: cell.cpp
* @Last modified by:   Tausif Ali
* @Last modified time: 22-Feb-2017
* @Copyright: feel free to use, adding reference appreciated :)
*/

#include "cell.h"
#include <iostream>

cell::cell()
{
  a = 0;
  left = right = NULL;
}

cell::~cell()
{
  a = 0;
  left = right = NULL;
}

void cell::up()
{
  a+=1;
}
void cell::down()
{
  a-=1;
}
int cell::output()
{
  return a;
}
void cell::input(int x)
{
  a = x;
}
