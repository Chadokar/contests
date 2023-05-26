#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

int total =0;

bool lack(vector<vector<int>> v,int i,int j){
    int n = v.size();
    int m = v[0].size();
    return false;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> vs;
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            vs.push_back(a);
        }
        v.push_back(vs);
    }
    bool a = lack(v,0,0);
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

