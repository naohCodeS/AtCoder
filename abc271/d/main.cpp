#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n,s;
vector<ll> a,b;
bool dp[110][10010];
string root;

int main(){
    cin>>n>>s;
    a.resize(n);
    b.resize(n);
    rep(i,n){
        cin>>a[i]>>b[i];
    }
    dp[0][0] = true;
    rep(i, n){
        rep(j,s+1){
            if(j-a[i]>=0&&dp[i][j-a[i]]) dp[i+1][j] = true;
            if(j-b[i]>=0&&dp[i][j-b[i]]) dp[i+1][j] = true;
        }
    }
    if(dp[n][s]){
        ll tmp = s;
        for(ll i=n-1;i>=0; i--){
            if(tmp>=a[i] && dp[i][tmp - a[i]]){
                tmp = tmp - a[i];
                root.push_back('H');
            }
            else{
                tmp = tmp - b[i];
                root.push_back('T');
            }
        }
        reverse(root.begin(), root.end());
        cout<<"Yes"<<endl;
        cout<<root<<endl;
    }
    else cout<<"No"<<endl;
}