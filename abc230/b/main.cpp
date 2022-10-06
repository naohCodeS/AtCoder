#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

string s;
string t = "oxxoxxoxxoxxoxxoxxoxx";
bool yes = false;

int main(){
    cin>>s;
    rep(i,3){
        bool tmp = true;
        rep(j, s.size()){
            if(s[j]==t[i+j]){}
            else tmp=false;
            if(!tmp) break;
        }
        if(tmp){
            yes = true;
        }
    }
    if(yes)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}