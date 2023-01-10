#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll h,w;
ll rs,cs;
ll n;
ll q;
ll nr, nc;

map<ll, vector<ll>> yoko, tate;

int main(){
    cin>>h>>w>>rs>>cs;
    cin>>n;
    rep(i,n){
        ll r,c;
        cin>>r>>c;
        yoko[r].push_back(c);
        tate[c].push_back(r);
    }
    for(auto a : yoko){
        sort(a.second.begin(), a.second.end());
    }
    for(auto a : tate){
        sort(a.second.begin(), a.second.end());
    }
    nr = rs;
    nc = cs;

    cin>>q;
    rep(i,q){
        char d;
        ll l;
        cin>>d>>l;
        if(d=='R'){
            if(yoko.find(nr) != yoko.end()){
                auto bound = upper_bound(yoko[nr].begin(), yoko[nr].end(), nc);
                auto id = distance(yoko[nr].begin(), bound);
                if(bound == yoko[nr].end()){
                    nc += min(w - nc, l);
                }
                else{
                    nc += min(yoko[nr][id]-nc, l);
                }
            }
            else{
                nc += min(w - nc, l);
            }
        }
        if(d=='L'){
            if(yoko.find(nr) != yoko.end()){
                auto bound = lower_bound(yoko[nr].begin(), yoko[nr].end(), nc);
                auto id = distance(yoko[nr].begin(), bound) - 1;
                if(id < 0){
                    nc -= min(nc - 1, l);
                }
                else{
                    nc -= min(nc-yoko[nr][id]-1, l);
                }
            }
            else{
                nc -= min(nc - 1, l);
            }
        }
        if(d=='U'){
            if(tate.find(nc) != tate.end()){
                auto bound = lower_bound(tate[nc].begin(), tate[nc].end(), nr);
                auto id = distance(tate[nc].begin(), bound) - 1;
                if(id < 0){    
                    nr -= min(nr - 1, l);
                }
                else{
                    nr -= min(nr-tate[nc][id]-1, l);
                }
            }
            else{
                nr -= min(nr - 1, l);
            }
        }
        if(d=='D'){
            if(tate.find(nc) != tate.end()){
                auto bound = upper_bound(tate[nc].begin(), tate[nc].end(), nr);
                auto id = distance(tate[nc].begin(), bound);
                if(bound == tate[nc].end()){
                    nr += min(h - nr, l);
                }
                else{
                    nr += min(tate[nc][id] - nr, l);
                }
            }
            else{
                nr += min(h - nr, l);
            }
        }
        cout<<nr<<" "<<nc<<endl;
    }
    
}