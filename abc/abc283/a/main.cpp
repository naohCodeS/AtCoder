#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    ll a,b; cin>>a>>b;
    ll ans = 1;
    rep(i,b){
        ans *= a;
    }
    cout<<ans<<endl;
}