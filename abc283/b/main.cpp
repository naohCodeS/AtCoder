#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
vector<ll> a;
ll q;

int main(){
    cin>>n;
    rep(i,n){
        ll tmp; cin>>tmp;
        a.push_back(tmp);
    }
    cin>>q;
    rep(i,q){
        ll query; cin>>query;
        if(query==1){
            ll k,x;
            cin>>k>>x;
            k--;
            a[k] = x;
        }
        else{
            ll k;
            cin>>k;
            cout<<a[k-1]<<endl;
        }
    }
}