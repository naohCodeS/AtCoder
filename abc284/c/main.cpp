#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,m;
vector<vector<ll>> g;
vector<bool> visited;

void dfs(ll v){
    visited[v] = true;
    for(ll nv : g[v]){
        if(visited[nv]) continue;
        dfs(nv);
    }
}

int main(){
    cin>>n>>m;
    g.resize(n);
    visited.resize(n, false);
    rep(i,m){
        ll u,v;
        cin>>u>>v;
        u--,v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll ans = 0;
    rep(i,n){
        if(visited[i]) continue;
        dfs(i);
        ans++;
    }
    cout<<ans<<endl;
}