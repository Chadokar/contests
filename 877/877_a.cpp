#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n,k=0,m=0;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
        cin>>x;
        m = max(m,x);
		k = min(k,x);
	}
	if(k<0) cout<<k<<endl;
	else cout<<m<<endl;
	
    cout<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
