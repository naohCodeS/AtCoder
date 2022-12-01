#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a<=c && c<=b || b<=c && c<=a) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}