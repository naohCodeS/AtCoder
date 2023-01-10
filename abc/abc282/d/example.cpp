#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    ll n,m; cin>>n>>m;
    vector<vector<ll>> to(n);
    rep(i,m){
        ll a,b; cin>>a>>b;
        a--,b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    vector<ll> c(n, -1LL);
    vector<ll> cvs(2);
    auto dfs = [&](auto dfs, ll v, ll nc=0) -> bool{
        if(c[v] != -1) return c[v] == nc;
        c[v] = nc;
        cvs[nc]++;
        for(ll u : to[v]) if(!dfs(dfs, u, !nc)) return false;
        return true;
    };
    auto c2 = [&](ll n) {return n*(n-1)/2;};
    ll ans = c2(n)-m;
    rep(i,n){
        if(c[i]!=-1) continue;
        cvs = vector<ll>(2);
        if(!dfs(dfs, i)){
            cout<<0<<endl;
            return 0;
        }
        for(ll s : cvs) ans -= c2(s);
    }
    cout<<ans<<endl;
}