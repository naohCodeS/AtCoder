
#include <bits/stdc++.h>
using namespace std;

double v[100][2];


int main() {
  // cout << "こんにちは" << endl;
  // cout << "AtCoder" << endl;

  v[0][0] = 0;
  v[0][1] = 0;

  for(int k=0; k<100; k++){
    v[k+1][0] = 0.5*(-1+0.9*v[k][0])+0.5*(1+0.9*v[k][1]);
    v[k+1][1] = 0.5*(0+0.9*v[k][0])+0.5*(-1+0.9*v[k][1]);
  }
  printf("  k,       l1,        l2\n");
  for(int i=0; i<100; i++){
    printf("%3d, %2.5lf, %.5lf\n", i, v[i][0], v[i][1]);
  }
}


/*
コンテストフォルダ作成 : acc new [コンテスト名] --template cpp
回答 : 問題を開いてmain.cppを編集
テスト : oj test -c ./a.out -d ./tests
提出 : acc submit
*/