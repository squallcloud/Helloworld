// Helloworld.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "Hoge.h"

int main()
{
  ::printf("ブランチテスト\n");
  ::printf("コミットしたい部分\n");

  Hoge hoge;
  hoge.Exec();

  std::unique_ptr<Hoge> spHoge(new Hoge());

  spHoge->Exec();

  return 0;
}

