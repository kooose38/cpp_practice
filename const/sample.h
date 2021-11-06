#ifndef _SAMPLE_H_
#define __SAMPLE_H_ 

#include <iostream>
#include <string>

using namespace std;

class CSample{
   private:
      string m_str;
   public:
      CSample();
      void setStr(const string str);
      string getStr() const;
   public:
      static const int m_cst = 100; // ヘッダー内で定義できる
}

#endif // __SAMPLE_H_