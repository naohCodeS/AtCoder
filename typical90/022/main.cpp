#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll a,b,c;

/*
最大公約数 O(log(小さい方の数))
計算量最悪はフィボナッチ数列の隣接2項 O(log_(黄金比)(小さい方の数))
--ラメの定理--
gcd(a,b)の計算回数は小さい方の数を十進法であらわしたときの桁数をdとし、5d回以下となる
-------------
*/
long long gcd(ll a, ll b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    cin>>a>>b>>c;
    ll gcdn = gcd(gcd(a,b),c);
    cout<<(a+b+c)/gcdn-3<<endl;
}