#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n, m;
vector<pair<ll,ll>> ab, abr;

ll dfs(){

}

int main(){
    cin>>n>>m;
    ab.resize(m);
    rep(i,m) {
        ll a,b;
        cin>>a>>b;
        ab[i].first = a;
        ab[i].second = b;
    }
}