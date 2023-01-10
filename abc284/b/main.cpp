#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    ll t; cin>>t;
    rep(i,t){
        ll n; cin>>n;
        vector<ll> a(n);
        rep(j,n) cin>>a[j];
        ll ans = 0;
        rep(j,n)if(a[j]%2) ans++;
        cout<<ans<<endl;
    }
}