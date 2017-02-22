/**
* @Author: Tausif Ali
* @Date:   21-Feb-2017
* @Email:  anodecode@gmail.com
* @Filename: filehandler.h
* @Last modified by:   Tausif Ali
* @Last modified time: 22-Feb-2017
* @Copyright: feel free to use, adding reference appreciated :)
*/

#ifndef _FILEHANDLER_
#define _FILEHANDLER_

#include <fstream>
#include "cellhandler.h"

class filehandler {
private:
  std::ifstream fin;
  cellhandler *cc;

public:
  filehandler (std::string,cellhandler*);
  filehandler (std::string);
  ~filehandler ();

  void execute();
};

#endif
