#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll h,w;

int main(){
    cin>>h>>w;
    if(h==1||w==1)cout<<h*w<<endl;
    else cout<<((h+1)/2)*((w+1)/2)<<endl;
}