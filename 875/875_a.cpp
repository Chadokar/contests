#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        cout<<n+1-a<<" ";
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
