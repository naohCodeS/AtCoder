#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n, q;
ll a[200005];
ll x[200005];

int main(){
    cin>>n>>q;
    rep(i,n) cin>>a[i];
    rep(i,q) cin>>x[i];
    sort(a, a+n);
    
    rep(i,q){
        auto it = lower_bound(a, a+n, x[i]);
        cout<<n-(it - a)<<endl;
    }
}