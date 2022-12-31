#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,t;
vector<ll> a;

int main(){
    cin>>n>>t;
    a.resize(n);
    rep(i,n) cin>>a[i];
    t %= accumulate(a.begin(), a.end(), 0LL);
    ll now = 0;
    ll ans = 0;
    rep(i,n){
        if(now<=t && t <= now+a[i]) {
            cout<<i+1<<" "<<a[i]-(now+a[i]-t)<<endl;
            return 0;
        }
        now += a[i];
    }
}