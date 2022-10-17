#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
vector<ll> r;
double ans;

int main(){
    cin>>n;
    r.resize(n);
    rep(i,n) cin>>r[i];
    sort(r.rbegin(), r.rend());
    for(ll i=0; i<n; i++){
        if(i%2==0){
            ans += r[i]*r[i];
        }
        else{
            ans -= r[i]*r[i];
        }
    }
    // cout<<ans*M_PI<<endl;
    printf("%.10lf\n",ans*M_PI);
}