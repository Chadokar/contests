#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int n,k;
    cin>>n>>k;
    int t = min(30,k);
    cout<<min(n+1,1<<t)<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
