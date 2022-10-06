#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll h,w;
vector<vector<ll>> a;

int main(){
    cin>>h>>w;
    a.resize(h+1);
    rep(i,h){
        a[i].resize(w+1);
        ll tmp = 0;
        rep(j,w) {
            cin>>a[i][j];
            tmp += a[i][j];
        }
        a[i][w] = tmp;
    }
    a[h].resize(w+1);
    rep(j,w){
        ll tmp = 0;
        rep(i,h){
            tmp += a[i][j];
        }
        a[h][j] = tmp;
    }
    rep(i,h){
        rep(j,w){
            cout<<a[h][j]+a[i][w] - a[i][j];
            if(j==w-1) break;
            cout<<" ";
        }
        cout<<endl;
    }
}