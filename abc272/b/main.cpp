#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,m;
vector<vector<ll>> x;
vector<vector<bool>> g(101, vector<bool>(101));

int main(){
    cin>>n>>m;
    x.resize(m);
    rep(i,m){
        ll k;
        cin>>k;
        x[i].resize(k);
        rep(j,k){
            cin>>x[i][j];
        }
    }
    rep(i,m){
        for(ll j=0; j<(ll)x[i].size()-1LL; j++){
            for(ll k=j+1; k<(ll)x[j].size(); k++){
                g[x[i][j]-1][x[i][k]-1] = true;
                g[x[i][k]-1][x[i][j]-1] = true;
            }
        }
    }
    ll ans = true;
    rep(i,n){
        rep(j,n){
            if(i!=j&&!g[i][j]) ans = false;
        }
    }
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}