#include "rat.h"
#include <iostream>

using namespace std;

// クラスのソースコードで静的変数を初期化するのが一般的
int CRat::m_count = 0; // 静的変数の初期化

CRat::CRat() : m_id(0) // コンストラクタ
{
   m_id = m_count;
   m_count++; // インスタンスする度にプラスする
}

CRat::~CRat() // デストラクタの定義
{
   cout << "" << m_id << "" << endl;
   m_count--;
}

void CRat::showNum() // 呼び出せるのは静的変数のみ
{
   cout << "" << m_count << "" << endl;
}

void CRat::squeak() // 通常の変数と静的変数どちらも可能
{
   cout << m_id << ":" << "" << endl;
}
