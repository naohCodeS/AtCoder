#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    ll n;
    cin>>n;
    if(n>=42){
        if(n>=100) cout << "AGC"<<n+1<<endl;
        else if(n>=10)cout<<"AGC0"<<n+1<<endl;
        else cout<<"AGC00"<<n+1<<endl;
    }
    else{
        if(n>=100)cout<<"AGC"<<n<<endl;
        else if(n>=10)cout<<"AGC0"<<n<<endl;
        else cout<<"AGC00"<<n<<endl;
    }
}