#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
ll x[300], y[300];
ll ans;

int main(){
    cin >> n;
    rep(i, n) cin>>x[i]>>y[i];
    for(ll i=0; i<n-2; i++){
        for(ll j=i+1; j<n-1; j++){
            for(ll k=j+1; k<n; k++){
                if((y[k]-y[i])*(x[j]-x[i])-(y[j]-y[i])*(x[k]-x[i])!=0){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}