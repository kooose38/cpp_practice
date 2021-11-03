#ifndef __CALC__H_
#define __CALC__H_

// 引数によって名前は同じでも区別される
class CCalc
{
   private:
      int m_a, m_b;

   public:
      CCalc(); // 引数なしのコンストラクタ
      CCalc(int a, int b); // 引数有のコンストラクタ

      int add(); // 引数なし関数
      int add(int a, int b); // 引数あり関数

      void setValues(int a, int b);

      int getA();
      int getB();
};

#endif __CALC__H_