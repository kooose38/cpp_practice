#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

// 基本的なテンプレート関数,複数typeをつけることも可能.
template <typename T, typename S>
T sample(T x, T y){
   return x + y;
}

int main(){
   CCalc<int> i1; // テンプレートによる動的な型生成
   CCalc<string> i2;

   const int a = 2;
   const int b = 4;
   cout << sample<int, double>(a, b) << endl;
   i1.set(a, b);
   i1.add();
   cout << a << " + " << b << " = " << i1.get() << endl;

   const string s1 = "ABC";
   const string s2 = "DEF";
   cout << sample<string, int>(s1, s2) << endl;
   i2.set(s1, s2);
   i2.add();
   cout << s1 << " + " << s2 << " = " << i2.get() << endl;
   return 0;
}