#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,m;
vector<vector<ll>> g;
vector<ll> color;

int main(){
    cin>>n>>m;
    g.resize(n);
    rep(i,m){
        ll u,v; cin>>u>>v;
        u--,v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    color.resize(n);
    bool yes = true;
    ll groupid=0;
    rep(i,n){
        if(color[i]!=0) continue;
        groupid++;
        queue<ll> q;
        color[i] = groupid*2-1; //1と2を使う
        q.push(i);
        while(!q.empty()){
            ll now = q.front(); 
            q.pop();
            for(auto v : g[now]){
                if(color[v]!=0) {
                    if(color[now] == color[v]){
                        yes = false;
                    }
                    continue;
                }
                color[v] = (color[now]==2*groupid-1)?2*groupid:2*groupid-1;
                q.push(v);
            }
        }
    }
    if(!yes) {
        cout<<0<<endl;
        return 0;
    }
    map<ll,ll>color_counter;
    rep(i,n) {
        color_counter[color[i]]++;
    }
    ll tmp=0;
    for(auto ite = color_counter.begin(); ite != color_counter.end(); ite++){
        tmp += ite->second*(ite->second-1)/2;
    }
    cout<<n*(n-1)/2-m-tmp<<endl;
}