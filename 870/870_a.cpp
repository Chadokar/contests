#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    int ans = -1,t =0;
    for(int i=0;i<n;i++){
        if(v[i]>i){
            t++;
        }
    }
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

