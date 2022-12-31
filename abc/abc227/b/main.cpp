#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
ll s[20];
ll ans = 0;

int main(){
    cin>>n;
    rep(i,n) cin>>s[i];
    rep(i,n){
        bool can = false;
        rep(a,200){
            if(a==0)continue;
            rep(b,200){
                if(b==0)continue;
                if(4*a*b+3*a+3*b == s[i]) can = true;
            }
        }
        if(!can) ans++; 
    }
    cout<<ans<<endl;
}