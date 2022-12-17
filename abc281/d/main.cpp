#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,k,d;
vector<ll> a;
vector<vector<ll>> dp;

int main(){
    cin>>n>>k>>d;
    rep(i,n){
        ll tmp; cin>>tmp;
        a.push_back(tmp);
    }
    dp.resize(k);
    rep(i,k) dp[i].resize(d);
    rep(i,n) dp[0][a[i]%d] = max(dp[0][a[i]%d], a[i]);

    for(ll i=1; i<k; i++){
        rep(j,n){
            rep(l,d){
                if(dp[i][l] >= 0 && dp[i-1][l]!=a[j]) dp[i][(l+a[j])%d] = max(dp[i-1][l] + a[j], dp[i-1][l]);
            }
        }
    }
    
    cout<<((dp[k-1][0]==0)?-1:dp[k-1][0])<<endl;
}