#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

string o,e;

int main(){
    cin>>o>>e;
    if(o.size() == e.size()){
        for(ll i=0; i<(ll)o.size(); i++) cout<<o[i]<<e[i];
    }
    else{
        for(ll i=0; i<(ll)o.size()-1; i++)cout<<o[i]<<e[i];
        cout<<o[o.size()-1];
    }
    cout<<endl;
}