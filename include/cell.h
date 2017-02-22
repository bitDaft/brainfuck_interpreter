/**
* @Author: Tausif Ali
* @Date:   21-Feb-2017
* @Email:  anodecode@gmail.com
* @Filename: cell.h
* @Last modified by:   Tausif Ali
* @Last modified time: 22-Feb-2017
* @Copyright: feel free to use, adding reference appreciated :)
*/

#ifndef _CELL_
#define _CELL_

class cell {
private:
  int a;

public:
  cell ();
  ~cell ();

  void up();
  void down();
  int output();
  void input(int);

  cell *left,*right;
};

#endif
