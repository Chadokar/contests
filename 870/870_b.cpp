#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    int m = n/2;
    if(n%2 == 0){
        int l = m-1,r = m;
        while(l>=0 && m<n){
            if(v[l]==v[m]){
                l--;m++;
                continue;
            }
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
