#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int n;
    cin>>n;
    vector<ll> v,b,c;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[0]==v[i]){
            b.push_back(v[i]);
        }
        else c.push_back(v[i]);
    }
    if(b.size() && c.size()) {
        cout<<b.size()<<" "<<c.size()<<endl;
    }
    else {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
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