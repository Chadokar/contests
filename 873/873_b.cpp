#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int n;
    cin>>n;
    int gcd = 0,t =0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        t = x -(i+1);
        if(t<0) t =t*(-1);
        gcd =__gcd(t,gcd);
        // cout<<"gcd: "<<gcd<<" ,t = "<<t<<endl;
    }
    cout<<gcd<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

