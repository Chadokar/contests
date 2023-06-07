#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n;
    string s;
    cin>>n>>s;
    char c=s[0];
    for(int i=1;i<n;i++){
        if(s[i]==c){
            cout<<c;
            i++;
            c= s[i];
        }
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
