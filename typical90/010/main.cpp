#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n, q;
vector<ll> c,p;
vector<ll> score1, score2;

int main(){
    cin>>n;
    c.resize(n);
    p.resize(n);
    rep(i,n) cin>>c[i]>>p[i];
    score1.resize(n);
    score2.resize(n);
    if(c[0]==1)score1[0] = p[0];
    else score2[0] = p[0];
    rep(i,n-1){
        if(c[i+1] == 1){
            score1[i+1] = score1[i] + p[i+1];
            score2[i+1] = score2[i];
        }
        else{
            score1[i+1] = score1[i];
            score2[i+1] = score2[i] + p[i+1];
        }
    }
    cin>>q;
    rep(i,q){
        ll l,r;
        cin>>l>>r;
        l--,r--;
        if(l==0){
            cout<<score1[r]<<" "<<score2[r]<<endl;
        }
        else{
            cout<<score1[r]-score1[l-1]<<" "<<score2[r]-score2[l-1]<<endl;
        }
    }
}