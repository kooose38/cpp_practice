#ifndef __RAT_H_
#define __RAT_H_

class CRat
{
   public:
      CRat(); //コンストラクタ処理
      virtual ~CRat(); //デストラクタ処理

      static void showNum(); // 静的な関数 インスタンス化しなくても呼び出せる
      void squeak(); 

   private:
      int m_id;
      static int m_count; // 静的変数
}

#endif /* _RAT_H_ */