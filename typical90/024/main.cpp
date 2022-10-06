#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,k;
vector<ll> a,b;

int main(){
    cin>>n>>k;
    a.resize(n); b.resize(n);
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];
    ll count = 0;
    rep(i,n) count += (a[i]>=b[i])?(a[i]-b[i]):(b[i]-a[i]);
    if(count<=k && (count-k)%2 == 0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}