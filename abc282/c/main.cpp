#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
string s;

int main(){
    cin>>n;
    cin>>s;
    bool in = false;
    rep(i,n){
        if(s[i]=='\"') {
            in = !in;
        }
        else if(!in && s[i]==','){
            s[i] = '.';
        }
    }
    cout<<s<<endl;
}