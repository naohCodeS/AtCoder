#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,m;
vector<string> s;

int main(){
    cin>>n>>m;
    rep(i,n){
        string t; cin>>t;
        s.push_back(t);
    }
    ll ans=0;
    rep(i,n-1){
        for(ll j=i+1; j<n; j++){
            bool yes = true;
            rep(k,m){
                if(s[i][k]=='x' && s[j][k]=='x') yes=false;
            }
            if(yes) ans++;
        }
    }
    cout<<ans<<endl;
}