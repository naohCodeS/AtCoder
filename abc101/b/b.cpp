
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int ans=0;
    long long tmp=n;
    while(tmp>0){
        ans += tmp%10;
        tmp /=10;
    }
    if(n%ans==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}