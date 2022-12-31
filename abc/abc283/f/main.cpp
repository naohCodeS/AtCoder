#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
vector<pair<ll, ll>> p;

int main(){
    cin>>n;
    rep(i,n){
        ll pp; cin>>pp;
        p.push_back(pair<ll,ll>(i,pp));
    }
}