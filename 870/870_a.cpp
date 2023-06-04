#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

ll fact(ll n);
 
ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
ll fact(ll n)
{
      if(n==0)
      return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

void print(vector<ll>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    if(n<k) {
        cout<<0<<endl;
        return;
    }
    ll t =0;
    sort(v.begin(),v.end(),greater<int>());
    int i=0;
    while(i<v.size() && v.size()>=k){
        int s=0;
        while(s<k-1){
            if(v[s]>0){
                v[i] -= v.back();
            }
            s++;
        }
        t += v.back();
        v.pop_back();
        sort(v.begin(),v.end(),greater<int>());
        // print(v);
    }
    cout<<t<<endl;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
        solve();
	}
}


