#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll h,w;
vector<string> s;

int main(){
    cin>>h>>w;
    rep(i,h){
        string ss;
        cin>>ss;
        s.push_back(ss);
    }
    ll ans = 0;
    rep(i,h)rep(j,w){
        if(s[i][j] == '#') ans ++;
    }
    cout<<ans<<endl;
}