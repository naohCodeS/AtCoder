#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    int n; cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];    
    reverse(s.begin(), s.end());
    for(string ss : s) cout<<ss<<endl;
}