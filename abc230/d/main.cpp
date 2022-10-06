#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,d;
vector<pair<ll,ll>> lr;

int main(){
    cin>>n>>d;
    lr.resize(n);
    rep(i,n) {
        ll l,r;
        cin>>l>>r;
        lr[i].first = l;
        lr[i].second = r;
    }
    sort(lr.begin(), lr.end(), [](pair<ll,ll> &a, pair<ll,ll> &b){return a.second < b.second;});
    ll ans = 0, x = -(1LL << 40);
    for(auto& [l, r] : lr){
        if(x + d - 1 < l) {
            ans++;
            x = r;
        }
    }
    cout << ans << endl;
}