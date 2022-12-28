#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)


int main() {
  int n,a,b;
  vector<bool> dp;
  cin>>n>>a>>b;
  dp.resize(n, false);
  dp[0] = true;
  for(int i=0; i<n; i++){
    if(i < a && i < b) continue;
    if(i < a && i >= b) dp[i] = dp[i-b];
    if(i < b && i >= a) dp[i] = dp[i-a];
    if(i >= a && i >= b) dp[i] = dp[i-a] | dp[i-b];
  }
  int ans = 0;
  for(int i=0; i<n; i++) {
    cout<<dp[i]<<" ";
    ans += (dp[i]?0:1);
  }
  cout<<endl;
  cout<<ans<<endl;
}


/*
コンテストフォルダ作成 : acc new [コンテスト名] --template cpp
回答 : 問題を開いてmain.cppを編集
テスト : oj test -c ./a.out -d ./tests
提出 : acc submit
*/