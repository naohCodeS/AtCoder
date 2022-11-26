#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define P pair<ll,ll>
#define rep(i, n) for(ll i=0; i<(ll)(n); i++)

ll a,b;
long double x, y;

long double func(ll x){
    return a/sqrt(x+1)+x*b;
}

int main(){
    cin>>a>>b;
    long double tmp = pow((long double)b/a, 2/3.0);
    x = (pow(2,1/3.0)-2*tmp)/(2*tmp);
    // cout<<x<<endl;
    ll x1 = floor(x);
    ll x2 = ceil(x);
    long double y1 = func(x1);
    long double y2 = func(x2);
    if(x2 < 0) {
        cout<<y1<<endl;
        printf("%.10Lf\n", y1);
    }
    else{
        printf("%.10Lf\n", min(y1,y2));
    }

}