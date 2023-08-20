#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    ll m,k,a,b;
    cin >> m >> k >> a >> b ;
    ll tot = a + (b*k);
    if(tot == m){
        cout<<0<<endl;
        return;
    }
    if(tot>m){
        ll c =0;
        // for(ll i=1;i<=b && c+k <=m ;i++){
        //     c += k;
        // }
        if(k*b<=m){
            c = k*b;
        } else{
            c = (m/k)*k;
        }
        if(m-c<=a){
            cout<<0<<endl;
            return;
        }
        cout<<m-c-a<<endl;
        return;
    }
    ll r = m - (b*k + a);
    ll c =0,n =0;
    // while(c+k <= r){
    //     c+=k;
    //     n++;
    // }
    n = r/k;
    c = k*n;
    ll x =1;
    ll v = (n+1)*k - r;
    // cout<<"r = "<<r<<" ,c = "<<c<<" ,v = "<<v<<" ,n = "<<n<<endl;
    if(v != k){
        // cout<<"v = "<<v<<" ,a = "<<a<<endl;
        if(a >= v){
            cout<<n+min(r-c,(ll)1)<<endl;
            return;
        }
    }

    // while(a-- && x<=k+1){
    //     ll e = (v-c+x)/k;
    //     if((v-c+x)%k == 0){
    //         n += min(v-c,e);
    //         cout<<n<<endl;
    //         return;
    //     }
        x++;
    // }
    n = n + (r-c);
    cout<<n<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}