/**
* @Author: Tausif Ali
* @Date:   21-Feb-2017
* @Email:  anodecode@gmail.com
* @Filename: filehandler.cpp
* @Last modified by:   Tausif Ali
* @Last modified time: 22-Feb-2017
* @Copyright: feel free to use, adding reference appreciated :)
*/

#include <iostream>
#include "filehandler.h"

filehandler::filehandler (std::string ff)
{
  fin.open(ff,std::ios::in);
  cc = new cellhandler();
}
filehandler::filehandler (std::string ff,cellhandler * cp)
{
  fin.open(ff,std::ios::in);
  cc = cp;
}
filehandler::~filehandler ()
{
  fin.close();
}

void filehandler::execute()
{
  int tt[20]={},tf[20]={};
  int level =-1;
  char ch;
  fin.get(ch);

  while (!fin.eof()) {
    switch (ch) {
      case '+':{
        cc->up();
        break;}
      case '-':{
        cc->down();
        break;}
      case '<':{
        cc->movel();
        break;}
      case '>':{
        cc->mover();
        break;}
      case ',':{
        cc->inp(5);
        break;}
      case '.':{
        // std::cout<<static_cast<int>(cc->output())<<"b ";
        int t =0;
        cc->outp(t);
        std::cout <<static_cast<char>(t)<<" ";
        // std::cin.ignore();
        // std::cin.ignore();
        break;}
      case '[':{
        level++;
        tt[level] = fin.tellg();
        int tm=0;
        do{
          fin.get(ch);
          if(ch=='[')tm++;
          else if (ch==']')tm--;
        }
        while ((ch!=']')||(tm!=-1));
        //std::cout<<fin.tellg();std::cin.ignore();
        tf[level]=fin.tellg();
        int kk;
        // cc->outp(kk);
        fin.seekg(tt[level],std::ios::beg);
        // std::cout<<'\n'<<level<<' '<<tf[level]<<" "<<tt[level]<<" ";
        // std::cout<<kk<<" "<<fin.tellg();//<<'\n';
        cc->outp(kk);
        if(kk == 0)
        {
          fin.seekg(tf[level],std::ios::beg);
          level--;
        }
        break;}
      case ']':{
        fin.seekg(tt[level]-1,std::ios::beg);
        level--;
        break;}
      default:break;
    }
  fin.get(ch);}
}
