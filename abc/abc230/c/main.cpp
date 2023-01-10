#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n, a, b, p, q, r, s;

int main(){
    cin>>n>>a>>b;
    cin>>p>>q>>r>>s;
    ll l1 = max(1-a, 1-b);
    ll r1 = min(n-a, n-b);
    ll l2 = max(1-a, b-n);
    ll r2 = min(n-a, b-1);
    for(ll i=p;i<=q;i++){
        for(ll j=r;j<=s;j++){
            if(i-a==j-b && l1 <= i-a && i-a <= r1){
                cout << "#";
            }
            else if(i-a==-(j-b) && l2 <= i-a && i-a <= r2){
                cout<<"#";
            }
            else cout<<".";
        }
        cout<<endl;
    }
}