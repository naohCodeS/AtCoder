#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll h,w;
ll a[50][50];

int main(){
    cin>>h>>w;
    rep(i,h) rep(j,w) cin>>a[i][j];
    bool yes = true;
    for(ll i1=0; i1<h-1;i1++){
        for(ll i2=i1+1; i2<h; i2++){
            for(ll j1=0; j1<w-1;j1++){
                for(ll j2=j1+1; j2<w;j2++){
                    if(a[i1][j1]+a[i2][j2] <= a[i2][j1] + a[i1][j2]){

                    }
                    else {
                        yes = false;
                    }
                }
            }
        }
    }

    if(yes) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}