/**
* @Author: Tausif Ali
* @Date:   21-Feb-2017
* @Email:  anodecode@gmail.com
* @Filename: main.cpp
* @Last modified by:   Tausif Ali
* @Last modified time: 22-Feb-2017
* @Copyright: feel free to use, adding reference appreciated :)
*/

#include <iostream>
#include <fstream>
#include "filehandler.h"
#include "cellhandler.h"

int main(int argc, char const *argv[]) {

  cellhandler *cc = new cellhandler;
  if (argc == 2) {
    std::string filename = argv[1];
    // std::ifstream fileh(filename,std::ios::in);
    // std::string aa;
    // getline(fileh,aa);
    // std::cout<<aa;
    filehandler fh(filename,cc);
    fh.execute();
  }
  return 0;
}
