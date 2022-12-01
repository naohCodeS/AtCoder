#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,m;
vector<ll> a;
map<ll,ll> cnt;

int main(){
    cin>>n>>m;
    rep(i,n){
        ll aa; cin>>aa;
        a.push_back(aa);
    }
    rep(i,n){
        cnt[a[i]]++;
    }
    ll ans = -1;
    ll cntans=0;
    for(const auto &item : cnt){
        // cout<<item.first<<" : "<<item.second<<endl;
        if(item.second > n/2.0) {
            cntans++;
            ans = item.first;
        }
    }
    // cout<<cntans<<": "<<ans<<endl;
    if(ans !=-1 && cntans==1) cout<<ans<<endl;
    else cout<<"?"<<endl;
}