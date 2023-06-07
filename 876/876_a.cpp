#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n,k;
    cin>>n>>k;
    if(k==1) cout<<n<<endl;
    else if(n%k ==0 || n%k == 1) cout<<n/k + 1<<endl;
    else cout<<n/k + 2<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
