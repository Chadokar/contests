#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int n,m,k,H,r=0;
    cin>>n>>m>>k>>H;
    vector<int> h;
    for(int i=0;i<n;i++){
        int s;cin>>s;
        int a = abs(s-H);
        (a%k ==0 && a!=0) ? a/k <m ? r=r+1: r=r+0 : a=0;
    }
    cout<<r<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}