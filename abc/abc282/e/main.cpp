#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,m;
vector<string> s;

int main(){
    // cin>>n>>m;
    // rep(i,n){
    //     string ss; cin>>ss;
    //     s.push_back(ss);
    // }
    ll ans=1;
    rep(i,9) ans*=(i+1);
    cout<<ans<<endl;
}