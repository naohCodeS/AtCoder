#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)


ll h,w;
vector<vector<ll>> a;

void show_a(){
    cout<<"------------------"<<endl;
    rep(i,h){
        rep(j,w){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"------------------"<<endl;
}

int main(){
    cin>>h>>w;
    a.resize(h);
    rep(i,h){
        rep(j,w){
            ll b; cin>>b;
            a[i].push_back(b);
        }
    }
    show_a();
}