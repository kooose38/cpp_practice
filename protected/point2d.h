#ifndef __POINT2D_H_
#define __POINT2D_H_

class Point2D
{
   protected: // 子クラスからもアクセスできる変数
      int m_x, m_y;

   public:
      Point2D(); // コンストラクタ

      int setValues(int a, int b);
      int getx();
      int gety();

   protected:
      void init();
}
#endif 