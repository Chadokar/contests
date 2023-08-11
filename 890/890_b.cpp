#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int n;
    ll s=0;
    cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    if(n ==1) {
        cout<<"NO"<<endl;
        return;
    }
    ll t =0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            t++;
        }
        else {
            t = t-v[i] +1;
        }
        // cout<<"t = "<<t<<endl;
    }
    if(t<=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}