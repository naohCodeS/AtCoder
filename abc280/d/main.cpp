#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll k;

int main(){
    cin>>k;
    for(ll i=2; i*i<=k; i++){
        ll div_num = 0;
        while(k%i==0) k /= i, div_num++;
        ll n;
        while(div_num != 0){
            n += i;
        }
    }
}