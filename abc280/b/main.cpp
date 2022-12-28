#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
vector<ll> s;

int main(){
    cin>>n;
    rep(i,n){
        ll a; cin>>a;
        s.push_back(a);
    }
    vector<ll> a(n, 0);
    a[0] = s[0];
    ll tmp = 0;
    rep(i,n-1){
        tmp += a[i];
        a[i+1] = s[i+1] - tmp;
    }
    rep(i,n-1) cout<<a[i]<<" ";
    cout<<a[n-1]<<endl;
}