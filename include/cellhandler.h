/**
* @Author: Tausif Ali
* @Date:   21-Feb-2017
* @Email:  anodecode@gmail.com
* @Filename: cellhandler.h
* @Last modified by:   Tausif Ali
* @Last modified time: 22-Feb-2017
* @Copyright: feel free to use, adding reference appreciated :)
*/

#ifndef _CELLHANDLER_
#define _CELLHANDLER_

#include "cell.h"

class cellhandler {
private:
  cell* ptr;

public:
  cellhandler ();
  cellhandler (cell*);
  ~cellhandler ();

  void up();
  void down();
  void outp(int&);
  void inp(int);
  void movel();
  void mover();
};

#endif
