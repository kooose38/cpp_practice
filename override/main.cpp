#include <iostream>
#include "calc.h"

using namespace std;

int main(){
   CCalc *p1, *p2;
   p1 = new CCalc(); // 引数なしのコンストラクタ実行
   p2 = new CCalc(1, 4); // 引数有のコンストラクタ実行

   cout << 3 << " + " << 4 << " = " << p1->add(3, 4) << endl;
   cout << p2->getA() << " + " << p2->getB() << " = " << p2->add() << endl;
   delete p1, p2;
   return 0;
}