#ifndef __VECTOR2D__H__
#define __VECTOR2D__H__

#include "point2d.h"
// public, protected で定義された親クラスの呼び出しが可能
class Vector2D : public Point2D // 継承された子クラス
{
   public:
      void resetPosition(); // m_x, m_y を初期化する
      void move(int a, int b); // m_x, m_y を移動する
};

#endif // __VECTOR2D_H_