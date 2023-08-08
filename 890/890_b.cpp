#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int n;
    ll s=0;
    cin>>n;
    vector<int> v;
    bool b = false;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
        s+=a;
        if(a>n) b = true;
    }
    
    int r = (n/2)*2 + (n-(n/2));
    if((s>r || (s>=r && n%2 ==0) || b) && n!=1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}