#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
vector<ll> ans;
map<string, ll> sign;

int main(){
    cin>>n;
    rep(i,n){
        string s;
        cin>>s;
        sign[s]++;
        if(sign[s]==1){
            ans.push_back(i+1);
        }
    }
    for(auto a : ans)cout<<a<<endl;
}