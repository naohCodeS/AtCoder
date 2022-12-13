
#include <bits/stdc++.h>
using namespace std;

int a[2][2] = {
  {1,2},
  {3,4}
};

int main() {
  // cout << "こんにちは" << endl;
  // cout << "AtCoder" << endl;
  cout<<&a<<endl;
  cout<<a<<endl;
  cout<<*a<<endl;
  cout<<**a<<endl;

  cout<<a[1]<<endl;
  cout<<&a[0][1]<<endl;

  cout<<*(a[1]+1)<<endl;
}


/*
コンテストフォルダ作成 : acc new [コンテスト名] --template cpp
回答 : 問題を開いてmain.cppを編集
テスト : oj test -c ./a.out -d ./tests
提出 : acc submit
*/