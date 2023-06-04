#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n;
    cin >> n;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    int k=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]*a[j] == b[i]+b[j]){
                // cout<<"a["<<i<<"] = "<<a[i]<<" ,a["<<j<<"] = "<<a[j]<<" ,b["<<i<<"] = "<<b[i]<<" ,b["<<j<<"] = "<<b[j]<<endl;
                k++;
            }
        }
    }
    cout << k << endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
