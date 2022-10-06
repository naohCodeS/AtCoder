#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    ll n,k,a;
    cin>>n>>k>>a;
    ll card = k;
    if(card < n - a + 1){
        cout << card + a - 1<<endl;
        return 0;
    }
    card = card - (n - a) - 1;
    card = card % n;
    if(card == 0) cout<<n<<endl;
    else cout << card <<endl;
}