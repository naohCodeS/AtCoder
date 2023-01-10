#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
vector<ll> a,cop;
map<ll,ll> cnt;
ll ans[200005];

int main(){
    cin>>n;
    a.resize(n);
    rep(i,n) {
        cin>>a[i];
        cnt[a[i]]++;
        if(cnt[a[i]]==1)cop.push_back(a[i]);
    }
    sort(cop.begin(), cop.end());
    rep(i,n){
        auto v = upper_bound(cop.begin(), cop.end(), a[i]);
        // cout<<cop.size()-(v-cop.begin())<<endl;
        ans[(ll)cop.size()-(v-cop.begin())]++;
    }
    rep(i,n){
        cout<<ans[i]<<endl;
    }
}