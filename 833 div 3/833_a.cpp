#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n, t =0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>b) t++;
    }
    cout<<t<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
