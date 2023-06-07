#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

ll give(ll a,ll b){
    ll n = b-a+1;
    // cout<<"a: "<<a<<" ,b: "<<b<<endl;
    ll s = ((n*(2*a + n-1))/2);
    return (n*b) -s +n;
}

void solve(){
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>v;
    ll m =0,c=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x<=q) c++;
        else if(c>=k){
            m += give(k,c);
            c = 0;
        }
        else c =0;
        if(i == n-1 && x<=q && c+1>=k) m+= give(k,c);
        // cout<<"x = "<<x<<" ,q = "<<q<<" ,k = "<<k<<" ,c = "<<c<<" ,m = "<<m<<endl;
    }
    cout<<m<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
