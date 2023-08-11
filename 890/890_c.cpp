#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    ll n,c;
    cin>>n>>c;
    // cout<<"n = "<<n<<" ,k = "<<k<<endl;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    ll m =v[n-1];
    for(int j= n-1;j>0;j--){
        ll p = v[j];
        ll k =c;
        for(int i=j;i>0;i--){
            cout<<"p = "<<p<<" ,v["<<i-1<<"] = "<<v[i-1]<<" ,k = "<<k<<" ,m = "<<m<<endl;
            if(k<p-v[i-1] || p-v[i-1]<0) break;
            if(k == p-v[i-1]){
                k =0;
            } else if(k>p-v[i-1]) {
                p = p+1;
                k = k - (p-v[i-1]);
            }
            cout<<"p1 = "<<p<<" ,v["<<i-1<<"] = "<<v[i-1]<<endl;
            if(p>m)
            m = p;
        }
        cout<<"l"<<endl;
    }
    cout<<m<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}