#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll x;

int main(){
    cin>>x;
    ll ans = 0;
    ans += (x/500)*1000;
    x = x - 500*(x/500);
    ans += (x/5) * 5;
    cout<<ans<<endl;
}