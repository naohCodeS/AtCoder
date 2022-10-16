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
        cout<<"d"<<endl;
        cout<<*yoko[nr].begin()<<endl;
        if(d=='R'){
            nc += min(*upper_bound(yoko[nr].begin(), yoko[nr].end(), nc)-1-nc,l);
        }
        if(d=='L'){
            nc -= min(nc-*lower_bound(yoko[nr].begin(), yoko[nr].end(), nc)-1,l);
        }
        if(d=='U'){
            nr -= min(nc-*lower_bound(tate[nc].begin(), tate[nc].end(), nr)-1,l);
        }
        if(d=='D'){
            nr += min(*upper_bound(tate[nc].begin(), tate[nc].end(), nr)-nc-1,l);
        }
        cout<<nr<<nc<<endl;
    }
    // g.resize(h+2);
    // g4.resize(h+2);
    // rep(i,h+2) g[i].resize(w+2), g4[i].resize(w+2);
    // rep(i,h+2){
    //     g[i][0] = '#';
    //     g[i][w+1] = '#';
    // }
    // rep(i,w+2){
    //     g[0][i] = '#';
    //     g[h+1][i] = '#';
    // }
    // rep(i,h+2)rep(j,w+2)if(g[i][j]!='#')g[i][j]='.';
    // rep(i,n){
    //     ll r,c;
    //     cin>>r>>c;
    //     g[r][c] = '#';
    // }
    // rep(i,h+2){
    //     rep(j,w+2){
    //         if(g[i][j]=='.'){
    //             // l方向の連続移動可能数
    //             if(g[i][j-1]=='.') g4[i][j].l = g4[i][j-1].l + 1;
    //             // u方向の連続移動可能数
    //             if(g[i-1][j]=='.') g4[i][j].u = g4[i-1][j].u + 1;
    //         } 
    //     }
    // }
    // for(ll i=h+1; i>=0; i--){
    //     for(ll j=w+1; j>=0; j--){
    //         if(g[i][j]=='.'){
    //             // r方向の連続移動可能数
    //             if(g[i][j+1]=='.') g4[i][j].r = g4[i][j+1].r + 1;
    //             // d方向の連続移動可能数
    //             if(g[i+1][j]=='.') g4[i][j].d = g4[i+1][j].d + 1;
    //         }
    //     }
    // }
    // nr = rs;
    // nc = cs;
    // cin>>q;
    // rep(i,q){
    //     char d;
    //     ll l;
    //     cin>>d>>l;
    //     if(d=='R'){
    //         nc += min(g4[nr][nc].r, l);
    //     }
    //     else if(d=='L'){
    //         nc -= min(g4[nr][nc].l, l);
    //     }
    //     else if(d=='U'){
    //         nr -= min(g4[nr][nc].u, l);
    //     }
    //     else{
    //         nr += min(g4[nr][nc].d, l);
    //     }
    //     cout<<nr<<" "<<nc<<endl;
    // }

}