#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int x,k;
    cin>>x>>k;
    if(x%k != 0) {
        cout<<1<<endl;
        cout<<x<<endl;
        return;
    }
    for(int i=x-1; i>0; i--){
        if(i%k != 0 &&(x-i)%k!=0) {
            cout<<2<<endl;
            cout<<i<<" "<<x-i<<endl;
            return;
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

