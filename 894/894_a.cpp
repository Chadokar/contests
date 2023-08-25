#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int m,n,t =0;
    string s = "vika";
    cin >> n >> m;
    vector<string> v;
    for(int i=0;i<n;i++){
        string c;
        cin >> c;
        v.push_back(c);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[j][i]==s[t]){
                s[t] = '0';
                t++;
                break;
            }
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
