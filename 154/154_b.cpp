#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;


void solve(){
    string a,b;
    cin>>a>>b;
    if(a == b){
        cout<<"YES"<<endl;
        return;
    }
    if(a.size() == 2){
        cout<<"NO"<<endl;
        return;
    }
    int n = a.size();
    int k = n-2,r =1,e = INT_MAX,s =INT_MIN;
    while(k>0){
        if(a[k] == b[k] && a[k] == '0' && e==INT_MAX){
            // cout<<e<<endl;
            cout<<"YES"<<endl;
            return;
        }
        if(a[k] == b[k] && a[k] == '1'){
            e = max(e,k);
        }
        if(a[k]!=b[k] && e==INT_MAX) e =0;
        k--;
    }
    while(r<n){
        if(a[r] == b[r] && a[r] == '1' && s==INT_MIN){
            // cout<<s<<endl;
            cout<<"YES"<<endl;
            return;
        }
        if(a[r] == b[r] && a[r] == '0'){
            s = min(s,r);
        }
        if(a[r]!=b[r] && s == INT_MIN) s = n-1;
        r++;
    }
    if(e ==0 || s == n-1 || e<=s) {
        cout<<"NO"<<endl;
        return;
    }
    // cout<<e<<" "<<s<<endl;
    cout<<"YES"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

