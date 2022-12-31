#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t; cin>>s>>t;
    if(s==t){
        cout<<"Yes"<<endl;
        return 0;
    }
    int countdiff = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=t[i]) countdiff++;
    }
    if(countdiff==0) cout<<"Yes"<<endl;
    else if(countdiff==1 || countdiff>=3) cout<<"No"<<endl;
    else{
        char si, ti;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]!=t[i]){
                if(s[i]==t[i+1]&&s[i+1]==t[i]){
                    cout<<"Yes"<<endl;
                    return 0;
                }
                else{
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
}