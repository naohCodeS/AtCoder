#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main() {
  int m; cin>>m;
  vector<string> s;
  for(int i=0; i<m; i++){
    string ss; cin>>ss;
    s.push_back(ss);
  }
  for(int i=0; i<m; i++){
    string news;
    for(int j=0; j<m; j++){
      news.push_back(s[j][i]);
    }
    s.push_back(news);
  }
  for(int w=0; w<m; w++){
    string news;
    for(int i=0; w+i<m; i++){
      news.push_back(s[i][w+i]);
    }
    s.push_back(news);
  }
  for(int h=0; h<m; h++){
    string news;
    for(int i=0; h+i<m; i++){
      news.push_back(s[h+i][i]);
    }
    s.push_back(news);
  }
  for(int w=0; w<m; w++){
    string news;
    for(int i=w; i>=0; i--){
      news.push_back(s[i][w-i]);
    }
    s.push_back(news);
  }
  for(int h=0; h<m; h++){
    string news;
    for(int i=h; i<m; i++){
      news.push_back(s[i][m+h-i-1]);
    }
    s.push_back(news);
  }

  int ans = 0;
  for(string ss : s){
    int asc=0, dsc=0;
    int tmp1=0, tmp2=0;
    for(int i=1; i<(int)ss.size(); i++){
      if(ss[i]==ss[i-1]+1){
        tmp1++;
        tmp2=0;
      }
      else if(ss[i]==ss[i-1]-1){
        tmp1=0;
        tmp2++;
      }
      else{
        tmp1=tmp2=0;
      }
      asc = max(asc, tmp1);
      dsc = max(dsc, tmp2);
    }
    ans = max(max(ans, asc), dsc);
  }
  cout<<ans+1<<endl;
}


/*
コンテストフォルダ作成 : acc new [コンテスト名] --template cpp
回答 : 問題を開いてmain.cppを編集
テスト : oj test -c ./a.out -d ./tests
提出 : acc submit
*/