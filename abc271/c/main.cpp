#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll n;
vector<ll> a;
map<ll, ll> al;
ll stock;

int main(){
    cin>>n;
    rep(i,n) {
        ll tmp; cin>>tmp;
        al[tmp]++;
        if(al[tmp] > 1) {
            stock++;
        }
        else{
            a.push_back(tmp);
        }
    }
    sort(a.begin(), a.end());

    // for(auto i : a)cout<<i<<endl;
    // cout<<stock<<endl;

    // cout<<a.size()<<endl;

    ll current = 1;
    ll ind = 0;
    while(ind < (ll)a.size() || stock >= 2){
        // for(auto i : a)cout<<i;
        // cout<<endl;
        // cout<<((ind<a.size())?"true":"false")<<endl;
        // cout<<((stock>=2)?"true":"false")<<endl;
        // cout<<stock<<endl;

        // cout<<a.size()<<endl;
        // cout<<current<<endl;
        // cout<<ind<<endl;

        if(current == a[ind]){
            // cout<<"ss"<<endl;
            current++;
            ind++;
        }
        else{
            if(stock >= 2){
                stock -= 2;
                current++;
            }
            else if(stock == 1){
                stock--;
                if(ind >= (ll)a.size()){
                    break;
                }
                else{
                    a.pop_back();
                    current++;
                }
            }
            else{
                // cout<<ind<<endl;
                // cout<<(ll)a.size() - 2<<endl;
                if(ind >= (ll)a.size() - 1){
                    // cout<<"aaaa"<<endl;
                    break;
                }
                else {
                    // cout<<"nnnn"<<endl;
                    a.pop_back();
                    a.pop_back();
                    current++;
                }
            }
        }
    }
    cout<<current-1<<endl;
}