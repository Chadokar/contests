#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    int t =0;
    // cout<<"length = "<< v.size()<<", n = "<<n<<endl;

    for(int i=0;i<n;i++){
        int r =0;
        while(!v[i] && i<n){
            // cout<<"v["<<i<<"] = "<<v[i]<<endl;
            i++;
            r++;
        }
        t = max(t,r);
    }

    cout<<t<<endl;
    return;

}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

