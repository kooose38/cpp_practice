#include <iostream>
#include "vector2d.h"

using namespace std;

int main(int argc, char** args){
   Vector2D *v = NULL; // ポインタの初期化
   v = new Vector2D(); // Point2Dのコンストラクタ呼び出し
   v->setValues(1, 1);
   v->move(2, 4);

   cout << "p:(" << v->getx() << "," << v->gety() << ")" << endl;
   v->resetPosition();
   cout << "p:(" << v->getx() << "," << v->gety() << ")" << endl;
   delete v; // コンストラクタの破棄
   return 0;
}
