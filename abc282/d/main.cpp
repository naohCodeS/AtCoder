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

    vector<vector<ll>> group(groupid);
    rep(i,n){
        cout<<color[i]<<endl;
        group[ceil(color[i]/2.0)-1].push_back(i);
    }
    rep(i, groupid){
        cout<<"group " <<i<<endl;
        for(auto v : group[i]) cout<<v<<" ";
        cout<<endl;
    }

    ll minus = 0;
    rep(v1,n){
        for(auto v2 : g[v1]){
            if(color[v1]!=color[v2]) minus++;
        }
    }
    map<ll,ll>color_counter;
    rep(i,n) {
        color_counter[color[i]]++;
    }
    ll ans = 0;
    for(ll i=1; i<=groupid; i++){
        ans += color_counter[2*i-1]*(n-group[i-1].size())*color_counter[2*i];
        ans += color_counter[2*i]*(n-group[i-1].size())*color_counter[2*i-1];
    }
    cout<<ans/2-minus/2<<endl;
}