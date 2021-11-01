#include "vector2d.h"

void Vector2D::resetPosition()
{
   init();
}

void Vector2D::move(int a, int b)
{
   m_x += a;
   m_y += b;
}