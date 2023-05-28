#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    ll n;
    cin>>n;
    vector<ll> a,b;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll j=0,g = 1;
    for(ll i=n-1;i>=0;i--){
        ll x = upper_bound(a.begin(),a.end(),b[i]) -a.begin();
        x = n-x-j;
        j++;
        g = (x*g)%y;
        // cout<<"x ="<<x<<" g = "<<g<<" j = "<<j<<endl;
    }
    cout<<g<<endl;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
        solve();
	}
}

