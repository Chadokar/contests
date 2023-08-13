#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

ll valTo(int n,int s){
    ll a =0;
    for(int i=0;i<=n-s;i++){
        ll k = (s+i)*(n-i);
        a += k;
    }
    return a;
}
ll valMx(int n,int s){
    ll b = LONG_LONG_MIN;
    for(int i=0;i<=n-s;i++){
        ll k = (s+i)*(n-i);
        b = max(b,k);
    }
    return b;
}

void solve(){
    int n;
    cin>>n;
    vector<ll> a;
    for(int i=0;i<n;i++){
        a.push_back(i+1);
    }
    ll ans =0;
    for(int i=0;i<n;i++){
        ll k = LONG_LONG_MIN;
        ll s=0;
        for(ll j=1;j<n-i;j++){
            s += (j*j);
            k = max(k,j*j);
        }
        // cout<<"k1 = "<<k<<endl;
        // cout<<"s1 = "<<s<<endl;
            s += valTo(n,n-i);
            k = max(k,valMx(n,n-i));
        // cout<<"s2 = "<<s<<endl;
        // cout<<"k2 = "<<k<<endl;
        ans = max(ans,s-k);
    }
    cout<<ans<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}