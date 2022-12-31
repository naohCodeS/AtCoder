#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n, q;

int main(){
    cin>>n>>q;
    vector<vector<ll>> a;
    a.resize(n);
    rep(i,n){
        ll l;
        cin>>l;
        a[i].resize(l);
        rep(j,l){
            cin>>a[i][j];
        }
    }
    rep(i,q){
        ll s,t;
        cin>>s>>t;
        cout<<a[s-1][t-1]<<endl;
    }
}