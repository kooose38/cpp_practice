#include <iostream>
#include <string>
#include "sample.h"

using namespace std;

int main(){
   const int a = 1000; // 定数の基本形
   CSample *cs;
   cs = new CSample();

   cout << "定数: " << cs->m_cst << endl; // 静的定数の呼び出し
   cs->setStr("ABC"); // 引数は定数
   cout << cs->getStr() << endl; // 値の取得
   return 0;
}