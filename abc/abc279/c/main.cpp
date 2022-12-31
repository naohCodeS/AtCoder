#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll h,w;
vector<string> s,t;
vector<string> ss, tt;

map<string, ll> cnt;

int main(){
    cin>>h>>w;
    s.resize(h);
    t.resize(h);
    rep(i, h) cin>>s[i];
    rep(i, h) cin>>t[i];

    ss.resize(w);
    tt.resize(w);

    rep(i,w){
        ss[i].resize(h);
        tt[i].resize(h);
    }

    rep(i,h)rep(j,w) {
        ss[j][i] = s[i][j];
        tt[j][i] = t[i][j];
    }

    // rep(i,h) cout<<s[i]<<endl;
    // rep(i,w) cout<<ss[i]<<endl;

    rep(i,w) cnt[ss[i]]++;
    bool yes = true;
    rep(i,w){
        if(cnt[tt[i]]==0) yes = false;
        cnt[tt[i]]--;
    }
    if(yes) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}