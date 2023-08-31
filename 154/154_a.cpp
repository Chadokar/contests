#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

ll rn(vector<ll> &v){
    int n = v.size();
    ll a =0;
    for(int i=0;i<v.size();i++){
        a += pow(v[i],n-i-1);
    }
    return a;
}

void vn(vector<ll>& v,ll n){
    while(n){
        v.push_back(n%10);
        n=n/10;
    }
    reverse(v.begin(),v.end());
}

void solve(){
    string s;
    cin>>s;
    bool b = false,c = false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            b = true;break;
        }
        if(s[i]=='7'){
            c = true;break;
        }
        
    }
    if(c) cout<<71<<endl;
    else cout<<17<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

