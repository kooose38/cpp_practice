#include "sample.h"

CSample::CSample(){
   m_str = "";
}

void CSample::setStr(const string str){
   m_str = str;
   // str = "error" const定数を変更するとエラー
}

string CSample::getStr() const{
   return m_str;
}