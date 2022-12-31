#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

string s;

int main(){
    cin>>s;
    ll ans = 0;
    bool beforeiszero = false;
    for(ll i=0; i<(ll)s.size(); i++){
        if(s[i] == '0'){
            if(beforeiszero){
                beforeiszero = false;
            }
            else{
                ans++;
                beforeiszero = true;
            }
        }
        else{
            if(beforeiszero) beforeiszero =false;
            ans++;
        }
    }
    cout<<ans<<endl;
}