#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    string s;
    cin>>s;
    string c = "codeforces";
    int n = c.length();
    int t =0;
    
    for(int i=0;i<n;i++){
        if(c[i] != s[i]){
            t++;
        }
    }

    cout<<t<<endl;

}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

