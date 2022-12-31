#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

string s,t;

int main(){
    cin>>s>>t;
    if(s.length() < t.length()) {
        cout<<"No"<<endl;
        return 0;
    }
    for(ll start = 0; start <= s.length() - t.length(); start++){
        bool yes = true;
        for(ll i=0; i<t.length(); i++){
            if(s[start+i]!=t[i]) yes = false;
        }
        if(yes){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}