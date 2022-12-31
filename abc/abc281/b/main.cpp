#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

int main(){
    string s;
    cin>>s;
    if(s.size() !=8){
        cout<<"No"<<endl;
        return 0;
    }
    if(!('A'<=s[0]&&s[0]<='Z')){
        cout<<"No"<<endl;
        return 0;
    }
    if(!('A'<=s[s.size()-1]&&s[s.size()-1]<='Z')) {
        cout<<"No"<<endl;
        return 0;
    }
    bool yes = true;
    string sub = s.substr(1,s.size()-2);
    for(char c : sub){
        if(!('0'<=c&&c<='9'))yes=false;
    }
    if(yes){
        if(100000<=stoi(sub)&&stoi(sub)<=999999)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}