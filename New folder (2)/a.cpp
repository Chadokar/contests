#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int x,y,n;
    cin>>x>>y>>n;
    vector<int>v;
        v.push_back(y);
    for(int i=1;i<n;i++){
        int k = v[v.size()-1];
        if(k-i<x){
            cout<<-1<<endl;
            return;
        }
        v.push_back(k-i);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
