#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
vector<ll> p;

int main(){
    cin>>n;    
    rep(i,n){
        ll a; cin>>a;
        p.push_back(a);
    }
    ll bunshi = 1;
    rep(i,n){
        bunshi *= p[i];
    }
    ll bunbo = pow(100,n);
    printf("%.10lf\n", (double)bunshi/bunbo);
}