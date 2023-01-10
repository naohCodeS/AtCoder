#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    string s;
    cin>>s;
    ll ans = 0;
    for(char c : s){
        if(c=='v') ans++;
        else ans += 2;
    }
    cout<<ans<<endl;
    
}