#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll t;

int main(){
    cin>>t;
    rep(i,t){
        ll n; cin>>n;
        ll p, q;
        for(ll j=2; j*j*j<=n; j++){
            if(n%j)continue;
            if((n/j)%j) {
                q = j;
                p = (ll)round(sqrt(n/j));
            }
            else{
                p = j;
                q = n/j/j;
            }
            break;
        }
        cout<<p<<" "<<q<<endl;
    }
}