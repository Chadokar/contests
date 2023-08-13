#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int n;
    cin>>n;
    vector<vector<ll>> v,m;
    vector<ll> vect(2, LONG_LONG_MAX);
    for(int i=0;i<n;i++){
        int k;cin>>k;
        vector<ll> c;
        for(int j=0;j<k;j++){
            ll x;cin>>x;
            c.push_back(x);
        }
        m.push_back(vect);
        v.push_back(c);
    }
    vector<ll> sm;
    ll mm = LONG_LONG_MAX;
    for(int i=0;i<n;i++){
        int k = v[i].size();
        for(int j=0;j<k;j++){
            if(m[i][0]> v[i][j]){
                m[i][1]=m[i][0];
                m[i][0] = v[i][j];
            }
            else if(m[i][0]<=v[i][j] && m[i][1]>v[i][j]){
                m[i][1] = v[i][j];
            }
        }
        if(m[i][0]>m[i][1]) m[i][1] = m[i][0];
        mm = min(mm,m[i][0]);
        sm.push_back(m[i][1]);
    }
    sort(sm.begin(),sm.end());
    ll ans =0;
    for(int i=1;i<sm.size();i++){
        ans += sm[i];
    }
    cout<<ans+mm<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}