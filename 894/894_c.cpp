#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n;
    cin >> n;
    vector<ll>v;
    for (int i = 0; i < n;i++){
        int k;cin >> k;
        v.push_back(k);
    }
    if(v[0]!=n){
        cout<<"NO"<<endl;
        return ;
    }
    reverse(v.begin(),v.end());
    vector<ll>c(n,0);
    int j =0,k=0;
    for(int i=0;i<v[0];i++){
        c[k++] = v[n-1];
    }
    for(int i = 1; i < n; i++){
        if(v[i-1] ==v[i]) continue;
        for(int r =0;r<v[i]-v[j];r++){
            c[k++] = n - i;
        }
        j=i;
    }
    reverse(v.begin(),v.end());
    if(c!=v){
        cout<<"NO"<<endl;
        return;
    }
    else
    cout<<"YES"<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
