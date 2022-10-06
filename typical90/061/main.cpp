#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll q;
vector<ll> deckb, deckf;

int main(){
    cin>>q;
    rep(i,q){
        ll t,x;
        cin>>t>>x;
        if(t==1){
            deckb.push_back(x);
        }
        else if(t==2){
            deckf.push_back(x);
        }
        else{
            if(deckb.size() >= x){
                cout<<deckb[deckb.size() - x]<<endl;
            }
            else{
                cout<<deckf[x - deckb.size() - 1]<<endl;
            }
        }
    }
}