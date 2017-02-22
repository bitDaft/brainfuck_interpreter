/**
* @Author: Tausif Ali
* @Date:   21-Feb-2017
* @Email:  anodecode@gmail.com
* @Filename: cellhandler.cpp
* @Last modified by:   Tausif Ali
* @Last modified time: 22-Feb-2017
* @Copyright: feel free to use, adding reference appreciated :)
*/

#include "cellhandler.h"
#include <iostream>

cellhandler::cellhandler()
{
  ptr=new cell;
}
cellhandler::cellhandler (cell* t)
{
  ptr=t;
}
cellhandler::~cellhandler ()
{
  ptr = NULL;
}

void cellhandler::up()
{
  ptr->up();
}
void cellhandler::down()
{
  ptr->down();
}
void cellhandler::outp(int &k)
{
  const int t=ptr->output();
  k=t;
  //std::cout<<t<<"a ";
}
void cellhandler::inp(int x)
{
  ptr->input(x);
}
void cellhandler::movel()
{
  cell* temp =ptr;
  // std::cout<<" "<<temp->output()<<"q ";
  if (ptr->left == NULL) {
    temp = new cell;
    // std::cout<<temp->output()<<"w";
    ptr->left = temp;
    temp->right = ptr;
  }
  ptr = ptr->left;
}
void cellhandler::mover()
{
  cell* temp=ptr;
  // std::cout<<" "<<temp->output()<<"e ";
  if (ptr->right == NULL) {
    temp = new cell;
    //std::cout<<" "<<temp->output()<<"r ";
    ptr->right = temp;
    temp->left = ptr;
  }
  ptr = ptr->right;
}
