#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)


ll n, ans;
vector<ll> vol;

int main(){
    cin>>n;
    vol.resize(n+1, 0);
    rep(i,n){
        ll a;
        cin>>a;
        if(a<=n && vol[a]!=1) vol[a]++;
    }
    rep(i,n)vol[i+1] += vol[i];
    rep(i,n)if(vol[i]+(n-vol[i])/2 >= i) ans = i;
    cout<<ans<<endl;
}