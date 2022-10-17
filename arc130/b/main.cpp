#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll h,w,c,q;
vector<tuple<ll,ll,ll>> val;
vector<ll> ans;

int main(){
    cin>>h>>w>>c>>q;
    ans.resize(c,0);
    rep(i,q){
        ll t,n,c;
        cin>>t>>n>>c;
        c--;
        val.push_back(tuple<ll,ll,ll>(t,n,c));
    }
    reverse(val.begin(), val.end());

    // vector<ll> retu, gyou;
    set<ll> retu, gyou;
    rep(i,q){
        ll color = get<2>(val[i]);
        
        if(get<0>(val[i])==1){
            ll gyou_n = get<1>(val[i]);
            if(gyou.find(gyou_n)==gyou.end()){
                ans[color] += w - retu.size();
                gyou.insert(gyou_n);
            }
            else{

            }
        }
        else{
            ll retu_n = get<1>(val[i]);
            if(retu.find(retu_n)==retu.end()){
                ans[color] += h - gyou.size();
                retu.insert(retu_n);
            }
            else{

            }
        }
    }
    rep(i,c-1) cout<<ans[i]<<" ";
    cout<<ans[c-1]<<endl;
}