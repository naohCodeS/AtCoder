#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
ll ans;

int main(){
    cin>>n;
    rep(i,n) {
        ll a;
        cin>>a;
        ans += a;
    }
    cout<<ans<<endl;
}