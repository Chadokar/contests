#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    ll n;
    cin>>n;
    vector<ll> a,b,c;
    for(ll i=0;i<n;i++){
        int t;cin>>t;
        a.push_back(t);
    }
    for(ll i=0;i<n;i++){
        int t;cin>>t;
        b.push_back(t);
    }
    ll mx = LONG_MIN, mn = LONG_MAX, imi=0,imx =0;
    for(int i=0;i<n;i++){
        a[i]=a[i]-b[i];
        mx = max(mx,a[i]);
    }
    for(int i=0;i<n;i++){
        if(mx == a[i]){
            c.push_back(i+1);
        }
    }
    cout<<c.size()<<endl;
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}