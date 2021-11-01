#include "point2d.h"

Point2D::Point2D() // __init__処理
{
   init();
}

Point2D::~Point2D()
{
   init();
}

int Point2D::setValues(int a, int b)
{
   m_x = a, m_y = b;
}

int Point2D::getx()
{
   return m_x;
}

int Point2D::gety()
{
   return m_y;
}


void Point2D::init()
{
   m_x = 0, m_y = 0;
}