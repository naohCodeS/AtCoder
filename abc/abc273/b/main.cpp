#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll x,k;

int main(){
    cin>>x>>k;
    double tmp = x;
    rep(i,k){
        tmp = x/(double)pow(10,i+1);
        x = pow(10,i+1)*round(tmp);
    }
    cout<<x<<endl;
}