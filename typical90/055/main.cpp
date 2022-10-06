#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	ll n,p,q;
  	ll ans = 0;
  	vector<ll> a;
  	cin>>n>>p>>q;
  	a.resize(n);
	for(ll i=0 ;i<n; i++) cin>>a[i];
  	for(ll i=0; i<n-4; i++){
    	for(ll j=i+1; j<n-3; j++){
          	for(ll k=j+1; k<n-2; k++){
            	for(ll l=k+1; l<n-1; l++){
                	for(ll m=l+1; m<n; m++){
                      	if(a[i]%p*a[j]%p*a[k]%p*a[l]%p*a[m]%p == q){
                          	ans++;
                        }
                    }
                }
            }
        }
    }
  	cout<<ans<<endl;
}