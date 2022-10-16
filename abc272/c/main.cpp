#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

vector<ll> ev;
vector<ll> od;
ll n;

int main(){
    cin>>n;
    rep(i,n){
        ll a;
        cin>>a;
        if(a%2) od.push_back(a);
        else ev.push_back(a);
    }
    sort(ev.begin(), ev.end());
    sort(od.begin(), od.end());
    ll ans = -1;
    if(ev.size()>=2) ans = max(ev[ev.size()-1]+ev[ev.size()-2], ans);
    if(od.size()>=2) ans = max(od[od.size()-1]+od[od.size()-2], ans);
    cout<<ans<<endl;
}