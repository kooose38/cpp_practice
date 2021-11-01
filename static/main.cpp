#include <iostream>
#include <string>
#include "rat.h"

int main(){
   CRat *rt0, *rt1, *rt2; // ポインターの初期化
   rt0 = new CRat(); // ポインタをインスタンス化する
   CRat::showNum(); // クラス宣言から直接関数を呼び出す
   rt0->squeak();
   rt1 = new CRat();
   rt2 = new CRat();
   rt2->squeak();
   delete rt0, rt1; // デストラクタの呼び出し
   CRat::showNum();
   delete rt2; // メモリーの削除
   return 0; // デストラクタの呼び出し

}

int memory_array(){
   // 配列に対する動的なメモリ操作
   int *p = NULL; // ポインタ変数の初期化
   int i;
   p = new int[10]; // メモリを確保してアドレスに代入する

   for(i = 0; i < 10; i++){
      p[i] = i;
      cout << *(p+i) << endl;
   }

   delete [] p; // 配列メモリの削除
   return 0;
}