#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll k;
string ans;

int main(){
    cin>>k;
    rep(i,k){
        ans.push_back('A'+i);
    }
    cout<<ans<<endl;
}