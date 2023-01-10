#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,m;
vector<ll> lis;
ll dp[404][404];
ll maxnum = 1000000000;

int main(){
    cin>>n>>m;
    for(ll i=0; i<=m; i++){
        if(floor(sqrt(i)) != sqrt(i) || floor(sqrt(m-i)) != sqrt(m-i)) continue;
        lis.push_back(i);
        lis.push_back(m-i);
    }
    sort(lis.begin(), lis.end());
    rep(i,n+1)rep(j,n+1) dp[i][j] = maxnum;
    dp[1][1] = 0;
    rep(cnt, 1){
        rep(i,401){
            rep(j,401){
                if(dp[i][j]==maxnum) continue;
                for(auto k : lis){
                    ll x = sqrt(k);
                    ll y = sqrt(m-k);
                    if(i+x<=n&&i+y<=n){
                        dp[i+x][j+y] = min(dp[i+x][j+y],dp[i][j]+1);
                    }
                    if(i-x>=1&&i-y>=0){
                        dp[i-x][j-y] = min(dp[i-x][j-y],dp[i][j]+1);
                    }
                }
            }
        }
    }
    rep(i,n){
        rep(j,n){
            if(j==n-1)cout<<dp[i+1][j+1]<<endl;
            else cout<<dp[i+1][j+1]<<" ";
        }
    }
}