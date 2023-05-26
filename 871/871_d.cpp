#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

bool gold(float n,float m){
    if(n == m) {
        return true;
    }
    if(n <m) return false;
    return (gold((n/3),m) || gold((2*n/3),m));
}

void solve(){
    int n,m;
    cin>>n>>m;
    bool b = gold((float)n,(float)m);
    if(b) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

