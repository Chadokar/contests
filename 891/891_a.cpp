#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int n;
    cin>>n;
    vector<int> v;
    int t =0;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        v.push_back(a);
        if(a%2!=0) t++;
    }
    if(t%2!=0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}