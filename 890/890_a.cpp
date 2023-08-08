#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int n;
    cin>>n;
    vector<int> v,k;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
        k.push_back(a);
    }
    int m = 0;
    sort(k.begin(),k.end());
    for(int i=0;i<n;i++){
        if(k[i]!=v[i]){
            m = max(m,v[i]);
        }
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