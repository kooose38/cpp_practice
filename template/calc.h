#ifndef __CALC__H_
#define __CALC_H_ 

// インスタンスの生成時に型を定義する
// つまり、同じ動作をするクラスであれば型を分けなくてもよい
template<typename T> class CCalc{ 
   private:
      T m_n1;
      T m_n2;
      T m_nn;
   public:
      inline void set(const T a, const T b){ // テンプレートのクラスにはinlineを使う
         m_n1 = a;
         m_n2 = b;
      };
      inline void add() const{
         m_nn = m_n1 + m_n2;
      };
      inline T get() const{
         return m_nn;
      };

};

#endif // __CALC__H_