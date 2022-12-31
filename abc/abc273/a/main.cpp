#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;

int main(){
    cin>>n;
    ll k;
    ll ans = 1;
    for(ll i=1; i<=n; i++){
        ans *= i;
    }
    cout<<ans<<endl;
}