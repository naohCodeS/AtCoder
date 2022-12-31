#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

string s,t;

int main(){
    cin>>s>>t;
    rep(i,(ll)s.size()){
        if(s[i] != t[i]){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<t.size()<<endl;
}