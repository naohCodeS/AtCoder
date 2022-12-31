#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll k;
vector<pair<ll,ll>> prime;

int main(){
    cin>>k;

    // 素因数分解
    ll kk = k;
    for(ll i=2; i*i<=kk; i++){
        if(kk%i) continue;
        ll count = 0;
        while(kk%i==0) kk /= i, count++;
        prime.push_back(pair<ll,ll>(i, count));
    }
  	if(kk!=1) prime.push_back(pair<ll,ll>(kk, 1));

    ll left = 0;
    ll right = k;
    while(right - left > 1){
        ll middle = (right+left)/2;
        bool yes = true;
        for(auto pp : prime){
            ll p = pp.first;
            ll i = pp.second;
            ll count = 0;
          	for(ll j=1; pow(p, j) <= middle; j++){
            	count += middle / pow(p,j);
            }
            if(count < i) yes = false;
        }
        if(yes) right = middle;
        else left = middle;
    }
    cout << right << endl;
}