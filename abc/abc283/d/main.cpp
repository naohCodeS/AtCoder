#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

string s;

int main(){
    cin>>s;
    vector<string> stack;
    map<char, ll> box;
    stack.push_back("");
    for(char c : s){
        // cout<<c<<endl;
        if(c=='('){
            // cout<<"1"<<endl;
            stack.push_back("");
        }
        else if(c == ')'){
            // cout<<"2"<<endl;
            for(char c : stack[stack.size()-1]){
                box[c] = 0;
            }
            stack.pop_back();
        }
        else{
            // cout<<"3"<<endl;
            if(box[c]!=0){
                cout<<"No"<<endl;
                return 0;
            }
            else{
                box[c]++;
                stack[stack.size()-1].push_back(c);
            }
        }
    }
    cout<<"Yes"<<endl;
}